import spinal.core._

class Demo01_gen_verilog extends Component {

}

object Demo01_gen_verilog {
  def main(args: Array[String]): Unit = {
    //        SpinalVerilog(new Demo01)
    //        SpinalSystemVerilog(new Demo01)
    //        SpinalVhdl(new Demo01)
    //        SpinalConfig().generateVhdl(new Demo01)
    SpinalConfig(targetDirectory = "./verilog").generateVerilog(new Demo01_gen_verilog)
  }
}
