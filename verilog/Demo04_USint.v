// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : Demo04_USint
// Git hash  : 233721799c90331fe889a0994a11e4cc86acffa3

`timescale 1ns/1ps

module Demo04_USint (
);

  wire       [15:0]   fixTo_1_dout;
  wire       [15:0]   a;
  wire       [15:0]   b;
  wire       [31:0]   c;

  fixTo fixTo_1 (
    .din  (c[31:0]           ), //i
    .dout (fixTo_1_dout[15:0])  //o
  );
  assign a = 16'h031a;
  assign b = 16'h0233;
  assign c = (a * b);

endmodule

module fixTo (
  input      [31:0]   din,
  output     [15:0]   dout
);

  wire       [25:0]   temp_temp_dout;
  wire       [24:0]   temp_dout;
  reg        [15:0]   temp_dout_1;
  wire                when_UInt_l119;

  assign temp_temp_dout = ({1'b0,din[31 : 7]} + {1'b0,{24'h0,1'b1}});
  assign temp_dout = (temp_temp_dout >>> 1);
  assign when_UInt_l119 = (|temp_dout[24 : 16]);
  always @(*) begin
    if(when_UInt_l119) begin
      temp_dout_1 = 16'hffff;
    end else begin
      temp_dout_1 = temp_dout[15 : 0];
    end
  end

  assign dout = temp_dout_1;

endmodule
