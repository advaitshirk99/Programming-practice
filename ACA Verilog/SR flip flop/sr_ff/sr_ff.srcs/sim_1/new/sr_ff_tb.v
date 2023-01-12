`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12.01.2023 17:57:45
// Design Name: 
// Module Name: sr_ff_tb
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


module sr_ff_tb();
reg s, r, clk;
wire q;

sr_ff sr_ff_module(s, r, clk, q);
initial 
begin
clk = 0;
forever #10 clk = ~clk;
end

initial
begin
s = 1'b0; r = 1'b0;
#20 s = 1'b0; r = 1'b1;
#20 s = 1'b1; r = 1'b0;
#20 s = 1'b1; r = 1'b1;
end
endmodule
