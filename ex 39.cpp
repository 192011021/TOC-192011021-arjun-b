Automaton Simulator, v1.0
dfa {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {274 160}
	}
	state {
		coord {469 163}
	}
	state {
		final {yes}
		coord {281 326}
	}
	state {
		coord {475 317}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
	}
	edge 1 3 {
		transits {b}
		offset {0.5235987755982988}
	}
	edge 3 2 {
		transits {c}
		offset {0.5235987755982988}
	}
	edge 2 0 {
		transits {bc}
		offset {0.5235987755982988}
	}
	edge 0 0 {
		transits {bc}
		offset {2.356194490192345}
	}
	edge 2 1 {
		transits {a}
		offset {0.5235987755982988}
	}
	edge 1 1 {
		transits {a}
		offset {0.7086262721276703}
	}
	edge 3 1 {
		transits {a}
		offset {0.5235987755982988}
	}
	edge 3 0 {
		transits {b}
		offset {0.5026997834911753}
	}
	edge 1 0 {
		transits {c}
		offset {-7.531099431626361}
	}
}
