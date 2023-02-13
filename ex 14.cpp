Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {107 117}
	}
	state {
		coord {251 113}
	}
	state {
		coord {386 119}
	}
	state {
		coord {115 251}
	}
	state {
		final {yes}
		coord {229 250}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
		direction {R}
		output {c}
	}
	edge 1 1 {
		transits {a}
		offset {1.554131203080956}
		direction {R}
		output {a}
	}
	edge 1 2 {
		transits {b}
		offset {0.5235987755982988}
		direction {L}
		output {d}
	}
	edge 2 2 {
		transits {a}
		offset {1.150916369589345}
		direction {L}
		output {a}
	}
	edge 2 0 {
		transits {c}
		offset {1.094444922832373}
		direction {R}
		output {c}
	}
	edge 1 1 {
		transits {d}
		offset {-1.4645314639038178}
		direction {R}
		output {d}
	}
	edge 2 2 {
		transits {d}
		offset {-0.9272952180016122}
		direction {L}
		output {d}
	}
	edge 0 3 {
		transits {d}
		offset {-0.30587887140485215}
		direction {R}
		output {d}
	}
	edge 3 3 {
		transits {d}
		offset {-2.5468333961064404}
		direction {R}
		output {d}
	}
	edge 3 4 {
		transits {_}
		offset {0.5235987755982988}
		direction {L}
	}
	label {
		text {Halt}
		font {SansSerif 12 -}
		coord {226 288}
	}
}
