`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12.01.2023 19:40:15
// Design Name: 
// Module Name: moore_10110
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


module moore_10110(
input clk, rst, x,
output reg y);
parameter s0 = 3'b000,
          s1 = 3'b001,
          s2 = 3'b010,
          s3 = 3'b011,
          s4 = 3'b100;

reg[2:0]cst, nst;
always@(posedge clk, posedge rst)
begin
if(rst)
    cst <= s0;
else
    cst <= nst;
end

always@(*)
begin
    case(cst)
        s0: begin nst = x ? s1 : s0; y = 1'b0; end
        s1: begin nst = x ? s2 : s1; y = 1'b0; end
        s2: begin nst = x ? s3 : s0; y = 1'b0; end
        s3: begin nst = x ? s4 : s2; y = 1'b0; end
        s4: begin nst = x ? s2 : s1; y = 1'b1; end
    endcase    
end
endmodule
