Automaton Simulator, v1.0
dfa {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {123 116}
	}
	state {
		coord {249 116}
	}
	state {
		final {yes}
		coord {370 116}
	}
	state {
		coord {244 232}
	}
	edge 0 1 {
		transits {b}
		offset {0.9406005127133588}
	}
	edge 1 2 {
		transits {a}
		offset {0.7298056908526281}
	}
	edge 2 2 {
		transits {c}
		offset {-0.01694752980640491}
	}
	edge 3 3 {
		transits {abc}
		offset {-1.4618543698050308}
	}
	edge 1 3 {
		transits {bc}
		offset {-0.00876316418664147}
	}
	edge 0 3 {
		transits {c}
		offset {0.061520097799201534}
	}
	edge 2 3 {
		transits {ab}
		offset {6.402138598694076}
	}
	edge 0 2 {
		transits {a}
		offset {1.1946685844589988}
	}
}
