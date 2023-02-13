Automaton Simulator, v1.0
nfa {
	alphabet {abcd*@}
	state {
		initial {yes}
		coord {124 104}
	}
	state {
		coord {246 103}
	}
	state {
		final {yes}
		coord {373 99}
	}
	edge 0 1 {
		transits {b}
		offset {0.5235987755982988}
	}
	edge 1 2 {
		transits {c}
		offset {0.5235987755982988}
	}
	edge 0 2 {
		transits {c}
		offset {-0.8168270734930413}
	}
	edge 1 1 {
		transits {b}
		offset {1.6499953977643482}
	}
	edge 2 2 {
		transits {a}
		offset {0.992894389832651}
	}
}
