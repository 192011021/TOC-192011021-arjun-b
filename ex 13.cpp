Automaton Simulator, v1.0
dpda {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {179 164}
	}
	state {
		coord {301 164}
	}
	state {
		final {yes}
		coord {408 164}
	}
	edge 0 0 {
		transits {a}
		offset {2.356194490192345}
		action {push a}
	}
	edge 0 1 {
		transits {b}
		offset {0.5235987755982988}
		stacktop {a}
		action {pop}
	}
	edge 1 2 {
		transits {*c}
		offset {0.5235987755982988}
	}
	edge 1 1 {
		transits {b}
		offset {1.6142472221864275}
		stacktop {a}
		action {pop}
	}
}
