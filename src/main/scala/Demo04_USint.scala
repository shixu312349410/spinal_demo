import spinal.core._
import spinal.core.sim._
import spinal.lib.dsptool.FixData

class Demo04_USint extends Component{
//          val a = SInt(10 bits)
//          val b = SInt(9 bits)
//
//          a := b.resize(10)
//
//          val d = c + a


//          val c = U(8, 8 bits)
//          val d = S(8, 8 bits)

//          val e = U(7)
//          val f = S(7)
//
//          val g = U"3'd2"
//          val h = S"3'd2"
  /********************************************************************************************
   * fixed-point representatioin

   ********************************************************************************************/

      val a = UInt(16 bits)
      val b = UInt(16 bits)

      //convert the floating point value 3.1 into fixed representation,
      //total bit = 16 bits and decimal bits = 8 bits,FixData is not syhthesizable,just for simulation
      a := U(Integer.parseInt(FixData(3.1, UQ(16, 8)).hex,16)) //change the floating point value 3.1
      b := U(Integer.parseInt(FixData(2.2, UQ(16, 8)).hex,16))

      val c = a * b
      val d = c.fixTo( 23 downto 8) simPublic()

//      val a = FixData(6.82,UQ(16,8))
//      println(a.hex)
//      println(a.raw)
}

object Demo04_USint extends App {

  SpinalConfig(targetDirectory = "./verilog").generateVerilog(new Demo04_USint)

}
