Automaton Simulator, v1.0
dpda {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {222 205}
	}
	state {
		coord {355 208}
	}
	state {
		final {yes}
		coord {478 201}
	}
	edge 0 0 {
		transits {a}
		offset {2.1421338066285234}
		action {push a}
	}
	edge 1 2 {
		transits {*c}
		offset {0.5235987755982988}
	}
	edge 0 1 {
		transits {b}
		offset {0.5235987755982988}
		stacktop {a}
		action {pop}
	}
	edge 1 1 {
		transits {b}
		offset {1.6563016204731014}
		stacktop {a}
		action {pop}
	}
}
