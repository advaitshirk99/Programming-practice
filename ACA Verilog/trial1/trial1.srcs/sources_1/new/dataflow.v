`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 24.11.2022 14:28:52
// Design Name: 
// Module Name: dataflow
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


module dataflow(
    input x, 
    input y, 
    input z,
    output f);
    
    assign f = (((~x) & (~y) & (~z)) | ((x) & (~y) & (z)) | ((x) & (y) & (~z)) | ((x) & (y) & (z)));
endmodule
