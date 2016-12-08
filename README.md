# Instructions ARM

\#0 is an immediate value to be used by the operation
\<c\> Is an optional field. It specifies the condition under which the instruction is executed. If \<c\> is omitted, it defaults to always (AL).

### Data Processing

OP |Instruction				|OPTYPE|OPCODE	|XXX|XXX|Encoding						|
---|------------------------|------|--------|---|---|--------
AND|Bitwise AND				|010000|0000	|Rm |Rdn|AND\<c\> \<Rdn\>,\<Rm\>
EOR|Exclusive OR			|010000|0001	|Rm |Rdn|EOR\<c\> \<Rdn\>,\<Rm\>
LSL|Logical Shift Left		|010000|0010	|Rm |Rdn|LSL\<c\> \<Rdn\>,\<Rm\>
LSR|Logical Shift Right		|010000|0011	|Rm |Rdn|LSR\<c\> \<Rdn\>,\<Rm\>
ASR|Arithmetic Shift Right	|010000|0100	|Rm |Rdn|ASR\<c\> \<Rdn\>,\<Rm\>
ADC|Add with Carry			|010000|0101	|Rm |Rdn|ADC\<c\> \<Rdn\>,\<Rm\>
SBC|Substract with Carry	|010000|0110	|Rm |Rdn|SBC\<c\> \<Rdn\>,\<Rm\>
ROR|Rotate Right			|010000|0110	|Rm |Rdn|ROR\<c\> \<Rdn\>,\<Rm\>
TST|Test					|010000|1000	|Rm |Rn |TST\<c\> \<Rn\>,\<Rm\>
RSB|Reverse Substract		|010000|1001	|Rn |Rd |RSB\<c\> \<Rd\>,\<Rn\>,\#0
CMP|Compare Registers		|010000|1010	|Rm |Rn |CMP\<c\> \<Rn\>,\<Rm\>
CMN|Compare Negative		|010000|1011	|Rm |Rn |CMN\<c\> \<Rn\>,\<Rm\>
ORR|Logical OR				|010000|1100	|Rm |Rdn|ORR\<c\> \<Rdn\>,\<Rm\>
MUL|Multiply				|010000|1101	|Rn |Rdm|MUL\<c\> \<Rdm\>,\<Rn\>,\<Rdm\>
BIC|Bit Clear				|010000|1110	|Rm |Rdn|BIC\<c\> \<Rdn\>,\<Rm\>
MVN|Bitwise NOT				|010000|1111	|Rm |Rd |MVN\<c\> \<Rd\>,\<Rm\>

### Shift, add, sub, move

OP |Instruction							|XXX|XX|XX		|X		|XX		|XXX|XXX|Encoding
---|------------------------------------|---|--|--------|-------|-------|---|---|--------
LSL|Logical Shift Left (immediate)		|000|00|\#imm5	|		|		|Rm |Rd |LSL\<c\> \<Rd\>,\<Rm\>,\#imm5
LSR|Logical Shift Right (immediate)		|000|01|\#imm5	|		|		|Rm |Rd |LSR\<c\> \<Rd\>,\<Rm\>,\#imm5
ASR|Arithmetic Shift Right (immediate)	|000|10|\#imm5	|		|		|Rm |Rd |ASR\<c\> \<Rd\>,\<Rm\>,\#imm5
ADD|Add (register)						|000|11|00		|Rm		|		|Rn |Rd |ADD\<c\> \<Rd\>,\<Rn\>,\<Rm\>
SUB|Substract (register)				|000|11|01		|Rm		|		|Rn |Rd |SUB\<c\> \<Rd\>,\<Rn\>,\<Rm\>
ADD|Add (immediate)						|000|11|10		|\#imm3	|		|Rn |Rd |ADD\<c\> \<Rd\>,\<Rn\>,\#imm3
MOV|Move (immediate)					|001|00|Rd		|\#imm8	|		|	|	|MOV\<c\> \<Rd\>,\#imm8
