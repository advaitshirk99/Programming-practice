`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12.01.2023 20:19:20
// Design Name: 
// Module Name: mealy_seq_10110
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module mealy_seq_10110(
input clk, rst, x,
output reg y);

parameter s0 = 3'b000,
          s1 = 3'b001,
          s2 = 3'b010,
          s3 = 3'b011,
          s4 = 3'b100,
          s5 = 3'b101;
reg[2:0]cst, nst;

always@(posedge clk or rst)
begin
if(rst)
    cst <= s0;
else
    cst <= nst;
end

always@(posedge clk or rst)
begin
if(rst)
    y = 1'b0;
else if((cst == s5) && x == 0)
    y = 1'b1;
else 
    y = 1'b0;
end

always@(*)
begin
case(cst)
    s0: nst = x ? s1 : s0;
    s1: nst = x ? s2 : s1;
    s2: nst = x ? s3 : s0;
    s3: nst = x ? s4 : s2;
    s4: nst = x ? s5 : s3;
    s5: nst = x ? s3 : s0;
endcase
end
endmodule
