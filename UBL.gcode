M80
M501 ; leo la eeprom para asegurarme de no reescribir nada raro

M190 S80      ; Not required, but having the printer at temperature helps accuracy
M104 S240     ; Not required, but having the printer at temperature helps accuracy

G28           ; Home XYZ.
G29 P1        ; Do automated probing of the bed.
M300 S1046 P300
M300 S1318 P300
M300 S1567 P300
M300 S2093 P300
G29 P2 B O    ; Do manual probing of unprobed points. Requires LCD.
G29 P3 O      ; Repeat until all mesh points are filled in.

G29 O         ; View the Z compensation values.
M420 S1       ; Activate leveling compensation.
G29 S1        ; Save UBL mesh points to EEPROM.
M500          ; Save current setup. WARNING: UBL will be active at power up, before any `G28`.


G26 B80 H240 L0.3 ; Produce mesh validation pattern with primed nozzle
G29 P4 O      ; Move nozzle to 'bad' areas and fine tune the values if needed
              ; Repeat G26 and G29 P4 O commands as needed.

G29 S1        ; Save UBL mesh values to EEPROM.
M81
M300 S2093 P300
M300 S1567 P300
M300 S1318 P300
M300 S1046 P300
