`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12.01.2023 17:26:03
// Design Name: 
// Module Name: jk_ff_tb
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


module jk_ff_tb();
reg j, k, clk;
wire q;

jk_ff jk_ff_module(j, k, clk, q);
initial
begin
clk = 0;
forever #10 clk = ~clk;
end

initial 
begin
j = 1'b0; k = 1'b0;
#20 j = 1'b0; k = 1'b1;
#20 j = 1'b1; k = 1'b0;
#20 j = 1'b1; k = 1'b1; 
end
endmodule
