`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12.01.2023 19:57:46
// Design Name: 
// Module Name: moore_10110_tb
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


module moore_10110_tb();
reg clk, rst, x;
wire y;

moore_10110 moore_seq_detector(clk, rst, x, y);
initial begin
clk = 1'b1;
forever #10 clk = ~clk;
end

initial begin
rst = 1'b1;
#10 rst = ~rst;
x = 1'b1; #10 x = 1'b0; #10 x = 1'b1; #10 x = 1'b1; #10 x = 1'b0;
#10 x = 1'b1; #10 x = 1'b1; #10 x = 1'b0; #10 x = 1'b1; #10 x = 1'b0;
#10 x = 1'b1; #10 x = 1'b1; #10 x = 1'b0; #10 x = 1'b1; #10 x = 1'b0;
#10 x = 1'b0; #10 x = 1'b0; #10 x = 1'b1; #10 x = 1'b1; #10 x = 1'b0;
end
endmodule
