// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : Demo03_Bits
// Git hash  : 64e114c2e27f6de25f2c00c6893fb1889d6d2bb9

`timescale 1ns/1ps

module Demo03_Bits (
);

  reg        [9:0]    a;
  function [9:0] zz_a(input dummy);
    begin
      zz_a[4 : 0] = 5'h05;
      zz_a[9 : 5] = 5'h0a;
    end
  endfunction
  wire [9:0] _zz_1;

  assign _zz_1 = zz_a(1'b0);
  always @(*) a = _zz_1;

endmodule
