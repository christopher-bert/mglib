; docformat = 'rst'

;+
; Splits a scalar string with newline characters into a string array.
;
; :Returns:
;    `strarr`
; 
; :Params:
;    s : in, required, type=string
;       input string
;
; :Keywords:
;    unix : in, optional, type=boolean
;       use just linefeed
;    windows : in, optional, type=boolean
;       use carriage return and linefeed
;-
function vis_strunmerge, s, unix=unix, windows=windows
  compile_opt strictarr
  
  return, strsplit(s, vis_newline(unix=unix, windows=windows), /extract)  
end