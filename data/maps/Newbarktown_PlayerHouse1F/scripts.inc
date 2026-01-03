Newbarktown_PlayerHouse1F_MapScripts::
	.byte 0


GreetedByMom::
# 4 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	lockall
# 5 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	applymovement 1, FaceUp
# 6 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	waitmovement
# 7 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	msgbox GreetedByMom_Text_0
# 8 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	applymovement 1, WalkUpToPlayer
# 9 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	waitmovement
# 10 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	msgbox GreetedByMom_Text_1
# 12 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	applymovement 1, WalkBackToChair
# 13 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	waitmovement
# 16 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	setvar VAR_MAIN_STORY, 1
# 18 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	releaseall
	end


# 22 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
FaceUp:
# 23 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	face_up
# 24 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	step_end

# 27 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
WalkUpToPlayer:
# 28 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	face_up
# 29 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	walk_up
# 30 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	face_left
# 31 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	walk_left
# 32 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	face_up
# 33 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	walk_up
# 33 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	walk_up
# 34 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	step_end

# 37 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
WalkBackToChair:
# 38 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	face_down
# 39 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	walk_down
# 39 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	walk_down
# 40 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	face_right
# 41 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	walk_right
# 42 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	face_down
# 43 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	walk_down
# 44 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	face_right
	step_end

GreetedByMom_Text_0:
# 7 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	.string "Oh there you are {PLAYER}!$"

GreetedByMom_Text_1:
# 10 "data/maps/Newbarktown_PlayerHouse1F/scripts.pory"
	.string "Professor Elm called asking for you. It\n"
	.string "sounds like he needs your help with\l"
	.string "something {PLAYER}. You should meet\l"
	.string "him at his lab but he better not get you\l"
	.string "into any trouble though or I'll know\l"
	.string "where to find him!$"
