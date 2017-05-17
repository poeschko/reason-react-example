open Game;

module Board = {
  include ReactRe.Component;
  let name = "Board";
  type props = {rows: (row, row, row)};
  let renderField t =>
    <div>
      (
        switch t {
        | Cross => ReactRe.stringToElement "x"
        | Circle => ReactRe.stringToElement "o"
        | Empty => ReactRe.nullElement
        }
      )
    </div>;
  let renderRow (t1, t2, t3) => <div> (renderField t1) (renderField t2) (renderField t3) </div>;
  let render {props} => {
    let (r1, r2, r3) = props.rows;
    <div> (renderRow r1) (renderRow r2) (renderRow r3) </div>
  };
};

include ReactRe.CreateComponent Board;

let createElement ::rows => wrapProps {rows: rows};
