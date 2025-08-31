# 1 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"

# 2 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
NewbarkTown_ProfessorElmsLab_MapScripts::
# 3 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.byte 0

ProfElmLab_EventScript_Pokeball::
# 11 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	lockall
# 12 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_LAST_TALKED, BALL1
	goto_if_eq ProfElmLab_EventScript_Pokeball_2
# 17 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_LAST_TALKED, BALL2
	goto_if_eq ProfElmLab_EventScript_Pokeball_3
# 23 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 24 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CYNDAQUIL
# 25 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
ProfElmLab_EventScript_Pokeball_1:
# 27 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox ProfElmLab_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 28 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfElmLab_EventScript_Pokeball_8
# 51 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 52 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewProfessor_NotChosen
ProfElmLab_EventScript_Pokeball_7:
# 54 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	waitmessage
# 55 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, FaceRight
# 56 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 57 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox PointInDirection
# 58 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	waitmessage
# 59 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

ProfElmLab_EventScript_Pokeball_2:
# 13 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 14 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
# 15 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	goto ProfElmLab_EventScript_Pokeball_1

ProfElmLab_EventScript_Pokeball_3:
# 18 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 19 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TOTODILE
# 20 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	goto ProfElmLab_EventScript_Pokeball_1

ProfElmLab_EventScript_Pokeball_8:
# 29 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	givemon VAR_TEMP_0, 5
# 30 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 31 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ProfElmLab_EventScript_Pokeball_11
# 38 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ProfElmLab_EventScript_Pokeball_12
# 46 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 47 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox ProfElmLab_EventScript_Pokeball_Text_2
	goto ProfElmLab_EventScript_Pokeball_7

ProfElmLab_EventScript_Pokeball_11:
# 32 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox ProfElmLab_EventScript_Pokeball_Text_1
# 34 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 35 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 36 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	call NicknamePartyMon
	goto ProfElmLab_EventScript_Pokeball_7

ProfElmLab_EventScript_Pokeball_12:
# 39 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox ProfElmLab_EventScript_Pokeball_Text_1
# 41 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 43 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	call NicknameBoxMon
	goto ProfElmLab_EventScript_Pokeball_7


NicknamePartyMon::
# 65 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 66 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 67 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 68 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 69 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 77 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 78 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 79 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 82 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 80 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


StartGiveMon::
# 87 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	lockall
# 88 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox StartGiveMon_Text_0
# 89 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	applymovement LOCALID_PLAYER, WalkToElm
# 90 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 91 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox Elm_Gives_Task
StartGiveMon_2:
# 93 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox StartGiveMon_Text_1, MSGBOX_YESNO
# 94 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StartGiveMon_4
# 99 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox StartGiveMon_Text_2
	goto StartGiveMon_2

StartGiveMon_1:
# 102 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox StartGiveMon_Text_3
# 103 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, ElmStepsAside
# 104 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement 0
# 105 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MAIN_STORY, 2
# 106 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

StartGiveMon_4:
# 95 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	msgbox Accepted_Task
	goto StartGiveMon_1


# 110 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
WalkToElm:
# 111 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 111 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 111 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 111 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	walk_up
# 112 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	step_end

# 115 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
ElmStepsAside:
# 116 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	face_left
# 117 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	walk_left
# 117 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	walk_left
# 118 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	face_down
# 119 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	step_end

# 122 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
FaceRight:
# 123 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	face_right
# 124 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	step_end

ProfElmLab_EventScript_Pokeball_Text_0:
# 27 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

ProfElmLab_EventScript_Pokeball_Text_1:
# 33 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

ProfElmLab_EventScript_Pokeball_Text_2:
# 47 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 65 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "Give it a nickname?$"

StartGiveMon_Text_0:
# 88 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "Ah there you are {PLAYER}! Just in\n"
	.string "time! Come here! I have an important\l"
	.string "task for you.$"

StartGiveMon_Text_1:
# 93 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "Could you go over to his house and get\n"
	.string "the supplies I need?$"

StartGiveMon_Text_2:
# 99 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "Please {PLAYER}, it is of utmost importance!$"

StartGiveMon_Text_3:
# 102 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "test$"

NewProfessor_NotChosen::
# 127 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "You did not choose the Pokemon$"

Elm_Gives_Task::
# 131 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "I need your help {PLAYER}. I am\n"
	.string "writing a paper on pokemon evolutions\l"
	.string "and I need some supplies that a good\l"
	.string "friend of mine has. But me and my\l"
	.string "assistant are both way too busy to go\l"
	.string "all the way to his house.$"

Accepted_Task::
# 139 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "Splendid! I believe you don't have a\n"
	.string "pokemon yet right? Then as\l"
	.string "compensation I will let you choose one\l"
	.string "of these three pokemon behind me as\l"
	.string "your very first companion so choose\l"
	.string "wisely.$"

PointInDirection::
# 146 "data/maps/NewbarkTown_ProfessorElmsLab/scripts.pory"
	.string "Great choice! I'm sure you two will\n"
	.string "become great partners! Now please\l"
	.string "hurry! We need those supplies A.S.A.P.\l"
	.string "Mr. Pokemon lives lives just past\l"
	.string "Cherrygrove City. Good luck!$"
