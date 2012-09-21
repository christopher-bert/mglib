; docformat = 'rst'

;+
; Helper routine to convert an netCDF data type to an IDL variable 
; declaration.
;
; :Private:
;
; :Categories: 
;    file i/o, netcdf, sdf
;-


;+
; Converts an netCDF data type to an IDL variable declaration.
; 
; :Private:
;
; :Returns:
;    string
;
; :Params:
;    dataType : in, required, type=string
;       netCDF name of variable type
;-
function mg_nc_typedecl, dataType
  compile_opt strictarr
  
  case strlowcase(dataType) of
    'unknown': return, '<undefined>'
    'byte': return, 'bytarr'
    'char': return, 'string'
    'int': return, 'intarr'
    'long': return, 'lonarr'
    'float': return, 'fltarr'
    'double': return, 'dblarr'
  endcase
end