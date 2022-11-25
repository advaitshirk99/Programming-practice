`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 24.11.2022 14:41:48
// Design Name: 
// Module Name: dataflow_tb
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


module behavioural_tb();
    reg x_tb, y_tb, z_tb;
    wire f_tb;
behavioural unit1(.x(x_tb), .y(y_tb), .z(z_tb), .f(f_tb));
initial 
begin

x_tb = 1'b0; y_tb = 1'b0; z_tb = 1'b0;
#10 x_tb = 1'b0; y_tb = 1'b0; z_tb = 1'b1;
#10 x_tb = 1'b0; y_tb = 1'b1; z_tb = 1'b0;
#10 x_tb = 1'b0; y_tb = 1'b1; z_tb = 1'b1;
#10 x_tb = 1'b1; y_tb = 1'b0; z_tb = 1'b0;
#10 x_tb = 1'b1; y_tb = 1'b0; z_tb = 1'b1;
#10 x_tb = 1'b1; y_tb = 1'b1; z_tb = 1'b0;
#10 x_tb = 1'b1; y_tb = 1'b1; z_tb = 1'b1;

$monitor("time = %t, x_tb =%b", $time, x_tb);
end
endmodule


