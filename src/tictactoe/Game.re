type token =
  | Cross
  | Circle
  | Empty;

type row = (token, token, token);

type boardType = (row, row, row);

type playerType =
  | CrossPlayer
  | CirclePlayer;
