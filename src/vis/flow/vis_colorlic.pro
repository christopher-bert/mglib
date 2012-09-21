; docformat = 'rst'

;+
; Create a LIC visualization where color denotes magnitude of the vector 
; field.
;
; :Examples:
;    The following creates a color LIC visualization::
;
;       restore, filepath('globalwinds.dat', subdir=['examples','data'])
;       loadct, 3
;       vis_image, vis_colorlic(u, v, scale=4), /new_window, /no_axes
; 
;    This looks like:
;
;    .. image:: colorlic-example.png
;
; :Params:
;    u : in, required, type="fltarr(m, n)"
;       x-coordinates of vector field
;    v : in, required, type="fltarr(m, n)"
;       y-coordinates of vector field
;
; :Keywords:
;    scale : in, optional, type=long, default=1L
;       factor to REBIN u and v by
;    _extra : in, optional, type=keywords
;       keywords to VIS_LIC or VIS_MAKETRUE
;-
function vis_colorlic, u, v, scale=scale, log=log, _extra=e
  compile_opt strictarr
  
  _scale = n_elements(scale) eq 0L ? 1L : scale
  dims = size(u, /dimensions)
  _u = rebin(u, dims[0] * _scale, dims[1] * _scale)
  _v = rebin(v, dims[0] * _scale, dims[1] * _scale)

  im = vis_lic(_u, _v, _extra=e)
  mag = sqrt(_u * _u + _v * _v)
  
  if (!d.name eq 'WIN' || !d.name eq 'X' || !d.name eq 'Z') then begin
    device, get_decomposed=dec
    device, decomposed=0
  endif
  
  im *= mag
  if (keyword_set(log)) then im = alog10(im)
  trueIm = vis_maketrue(bytscl(im), true=1, _extra=e)

  if (!d.name eq 'WIN' || !d.name eq 'X' || !d.name eq 'Z') then begin
    device, decomposed=dec
  endif
  
  return, trueIm
end


; main-level example program

restore, filepath('globalwinds.dat', subdir=['examples','data'])

loadct, 3
vis_image, vis_colorlic(u, v, scale=4), /new_window, /no_axes

end