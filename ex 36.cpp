Automaton Simulator, v1.0
nfa {
	alphabet {abcd*@}
	state {
		initial {yes}
		coord {105 117}
	}
	state {
		coord {232 117}
	}
	state {
		final {yes}
		coord {380 120}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
	}
	edge 1 1 {
		transits {ab}
		offset {1.5707963267948966}
	}
	edge 1 2 {
		transits {b}
		offset {0.5235987755982988}
	}
}
