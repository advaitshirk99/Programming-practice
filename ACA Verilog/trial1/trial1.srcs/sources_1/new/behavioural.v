`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 24.11.2022 15:10:07
// Design Name: 
// Module Name: behavioural
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


module behavioural(
    input x, 
    input y, 
    input z,
    output reg f);
    
always@(*)
begin
casex({x,y,z})
    3'b000 : f =1'b1;
    3'b101 : f =1'b1;
    3'b110 : f =1'b1;
    3'b111 : f =1'b1;
    default: f = 1'b0; 
endcase
end
endmodule
