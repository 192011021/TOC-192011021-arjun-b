Automaton Simulator, v1.0
dfa {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {174 185}
	}
	state {
		coord {342 187}
	}
	state {
		coord {342 337}
	}
	state {
		final {yes}
		coord {174 339}
	}
	edge 0 0 {
		transits {bc}
		offset {2.356194490192345}
	}
	edge 0 1 {
		transits {a}
		offset {0.6677287956019702}
	}
	edge 1 1 {
		transits {a}
		offset {0.714090698612158}
	}
	edge 1 2 {
		transits {b}
		offset {-0.5219495369814551}
	}
	edge 2 3 {
		transits {c}
		offset {6.613109113728288}
	}
	edge 3 3 {
		transits {abc}
		offset {-2.7942066906714738}
	}
	edge 2 0 {
		transits {b}
		offset {0.48012746439846143}
	}
	edge 1 0 {
		transits {c}
		offset {0.3299095425945744}
	}
	edge 2 1 {
		transits {a}
		offset {-0.5481651249112529}
	}
}
