MtPyre_3F_MapScripts:: @ 8231752
	.byte 0

MtPyre_3F_EventScript_231753:: @ 8231753
	trainerbattle 0, TRAINER_WILLIAM, 0, MtPyre_3F_Text_2317E3, MtPyre_3F_Text_231853
	msgbox MtPyre_3F_Text_231869, 6
	end

MtPyre_3F_EventScript_23176A:: @ 823176A
	trainerbattle 0, TRAINER_KAYLA, 0, MtPyre_3F_Text_2318A1, MtPyre_3F_Text_2318DD
	msgbox MtPyre_3F_Text_2318F2, 6
	end

MtPyre_3F_EventScript_231781:: @ 8231781
	trainerbattle 2, TRAINER_GABRIELLE_1, 0, MtPyre_3F_Text_231952, MtPyre_3F_Text_23196A, MtPyre_3F_EventScript_2317AD
	specialvar VAR_RESULT, sub_80B226C
	compare_var_to_value VAR_RESULT, 1
	goto_eq MtPyre_3F_EventScript_2317CC
	msgbox MtPyre_3F_Text_23199B, 4
	release
	end

MtPyre_3F_EventScript_2317AD:: @ 82317AD
	special sub_80B4808
	waitmovement 0
	msgbox MtPyre_3F_Text_231A49, 4
	setvar VAR_0x8004, 9
	special sub_81D1C20
	setorcopyvar VAR_0x8000, 9
	callstd 8
	release
	end

MtPyre_3F_EventScript_2317CC:: @ 82317CC
	trainerbattle 5, TRAINER_GABRIELLE_1, 0, MtPyre_3F_Text_231AAB, MtPyre_3F_Text_231AE6
	msgbox MtPyre_3F_Text_231B0D, 6
	end

MtPyre_3F_Text_2317E3: @ 82317E3
	.string "The rich atmosphere of the mountain\n"
	.string "has elevated my psychic power!\p"
	.string "A mere child like you…\n"
	.string "You dream of winning?$"

MtPyre_3F_Text_231853: @ 8231853
	.string "I drown in self-pity…$"

MtPyre_3F_Text_231869: @ 8231869
	.string "My psychic powers have surely\n"
	.string "grown several times, but…$"

MtPyre_3F_Text_2318A1: @ 82318A1
	.string "Ahahahaha!\p"
	.string "This is no place for children, least\n"
	.string "of all you!$"

MtPyre_3F_Text_2318DD: @ 82318DD
	.string "I lost that cleanly…$"

MtPyre_3F_Text_2318F2: @ 82318F2
	.string "This means my training is still not\n"
	.string "enough…\p"
	.string "I’ve got to keep working toward the\n"
	.string "summit…\p"
	.string "Go, me!$"

MtPyre_3F_Text_231952: @ 8231952
	.string "Why have you come here?$"

MtPyre_3F_Text_23196A: @ 823196A
	.string "That was amazing!\n"
	.string "You’re a very special TRAINER.$"

MtPyre_3F_Text_23199B: @ 823199B
	.string "POKéMON no longer of this world.\n"
	.string "POKéMON that are with you now.\p"
	.string "And the POKéMON that you will meet\n"
	.string "in the future…\p"
	.string "They are all to be equally cherished.\n"
	.string "Please remember that.$"

MtPyre_3F_Text_231A49: @ 8231A49
	.string "I would like to see your POKéMON\n"
	.string "when they grow up some more…\p"
	.string "Please, I need to see your POKéNAV.$"

MtPyre_3F_Text_231AAB: @ 8231AAB
	.string "Oh, it’s you…\p"
	.string "Have you come to show me your grown\n"
	.string "POKéMON?$"

MtPyre_3F_Text_231AE6: @ 8231AE6
	.string "How amazing!\n"
	.string "You are a special person.$"

MtPyre_3F_Text_231B0D: @ 8231B0D
	.string "POKéMON no longer of this world.\n"
	.string "POKéMON that are with you now.\p"
	.string "And the POKéMON that you will meet\n"
	.string "in the future…\p"
	.string "They are all to be equally cherished.\n"
	.string "I see that you’ve remembered that.$"
