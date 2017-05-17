open Game;

module TicTacToeApp = {
  include ReactRe.Component.Stateful;
  let name = "TicTacToe";
  type props = unit;
  type state = {rows: (row, row, row), player: playerType};
  let getInitialState _ => {
    rows: ((Empty, Empty, Empty), (Empty, Empty, Empty), (Empty, Empty, Empty)),
    player: CrossPlayer
  };
  let render {state} => <Board rows=state.rows />;
};

include ReactRe.CreateComponent TicTacToeApp;

let createElement = wrapProps ();
