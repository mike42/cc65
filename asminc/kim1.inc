; ---------------------------------------------------------------------------
;
; KIM-1 definitions
;
; ---------------------------------------------------------------------------


RAMSTART := $0200     ; Entry point


; ---------------------------------------------------------------------------
; Monitor Functions
; ---------------------------------------------------------------------------
OUTCHR   := $1EA0     ; Output character
INTCHR   := $1E5A     ; Input character without case conversion
DUMPT    := $1800     ; Dump memory to tape
LOADT    := $1873     ; Load memory from tape


; ---------------------------------------------------------------------------
; System Memory
; ---------------------------------------------------------------------------
SAL      := $17F5     ; Tape load address low
SAH      := $17F6     ; Tape load address high
EAL      := $17F7     ; Tape address end low
EAH      := $17F8     ; Tape address end high
ID       := $17F9     ; Tape Identification number
