open BsReactNative;

let a = 2.;
Js.log(a);

module Styles = {
  open Style;

  let container = style([flex(1.), justifyContent(Center), alignItems(Center)]);
  let text = style([color(String("#fff")), fontSize(Float(24.))]);
};

let app = () =>
  <View style=Styles.container>
    <Text> (ReasonReact.string("Let'''''''''s get this party started!!!")) </Text>
  </View>;
