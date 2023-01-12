`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12.01.2023 17:50:27
// Design Name: 
// Module Name: sr_ff
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


module sr_ff(
input s, r, clk,
output reg q);

always@(posedge clk)
begin
case({s, r})
    2'b00 : q <= q;
    2'b01 : q <= 0;
    2'b10 : q <= 1;
endcase
end
endmodule
