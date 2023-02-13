Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {99 92}
	}
	state {
		coord {213 89}
	}
	state {
		coord {356 94}
	}
	state {
		coord {479 98}
	}
	state {
		coord {482 210}
	}
	state {
		final {yes}
		coord {105 213}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
		direction {R}
		output {c}
	}
	edge 1 1 {
		transits {a}
		offset {1.433730152484709}
		direction {R}
		output {a}
	}
	edge 1 2 {
		transits {d}
		offset {0.5235987755982988}
		direction {R}
		output {d}
	}
	edge 2 2 {
		transits {a}
		offset {1.5024099832043931}
		direction {R}
		output {a}
	}
	edge 2 3 {
		transits {_}
		offset {0.5235987755982988}
		direction {L}
		output {a}
	}
	edge 3 3 {
		transits {a}
		offset {1.1525719972156676}
		direction {L}
		output {a}
	}
	edge 3 4 {
		transits {d}
		offset {0.5235987755982988}
		direction {L}
		output {d}
	}
	edge 4 4 {
		transits {a}
		offset {-0.4094372095261427}
		direction {L}
		output {a}
	}
	edge 4 0 {
		transits {c}
		offset {0.5235987755982988}
		direction {R}
		output {c}
	}
	edge 0 5 {
		transits {d}
		offset {0.39000762606096573}
		direction {R}
		output {_}
	}
	label {
		text {Halt}
		font {SansSerif 12 -}
		coord {95 248}
	}
}
