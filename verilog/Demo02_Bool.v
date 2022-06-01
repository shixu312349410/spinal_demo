// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : Demo02_Bool
// Git hash  : 64e114c2e27f6de25f2c00c6893fb1889d6d2bb9

`timescale 1ns/1ps

module Demo02_Bool (
  input               clk,
  input               reset
);

  wire                a;
  reg                 b;
  wire                c;
  wire                d;
  reg                 a_regNext;
  wire                when_Demo02_Bool_l9;

  always @(*) begin
    b = 1'b1;
    if(when_Demo02_Bool_l9) begin
      b = 1'b0;
    end
  end

  assign c = 1'b0;
  assign d = 1'b0;
  assign when_Demo02_Bool_l9 = (a ^ a_regNext);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      a_regNext <= c;
    end else begin
      a_regNext <= a;
    end
  end


endmodule
