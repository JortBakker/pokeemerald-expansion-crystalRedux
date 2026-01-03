NewBarkTown_MapScripts::
	.byte 0


GrannyLostHoppip::
# 4 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 5 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 6 "data/maps/NewBarkTown/scripts.pory"
	msgbox GrannyLostHoppip_Text_0
# 7 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


Fisherman::
# 11 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 12 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 13 "data/maps/NewBarkTown/scripts.pory"
	compare VAR_MAIN_STORY, 3
	goto_if_ge Fisherman_4
Fisherman_3:
# 21 "data/maps/NewBarkTown/scripts.pory"
	msgbox Fisherman_Text_2
Fisherman_1:
# 24 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return

Fisherman_2:
# 14 "data/maps/NewBarkTown/scripts.pory"
	msgbox Fisherman_Text_0
# 17 "data/maps/NewBarkTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 18 "data/maps/NewBarkTown/scripts.pory"
	msgbox Fisherman_Text_1
	goto Fisherman_1

Fisherman_4:
	checkitem ITEM_OLD_ROD
# 0 "data/maps/NewBarkTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Fisherman_2
	goto Fisherman_3


GrannyLostHoppip_Text_0:
# 6 "data/maps/NewBarkTown/scripts.pory"
	.string "Grandma: Oh dear... I seem to have lost\n"
	.string "Strawberry (hoppip) again... where could\l"
	.string "she be?...$"

Fisherman_Text_0:
# 14 "data/maps/NewBarkTown/scripts.pory"
	.string "Taiho: Heyo kiddo! I heard ya got\n"
	.string "yourself your very own pokemon, that's\l"
	.string "awesome! You know what... if you're\l"
	.string "going on your own journey you should\l"
	.string "have this, it'll come in handy!$"

Fisherman_Text_1:
# 18 "data/maps/NewBarkTown/scripts.pory"
	.string "Happy fishing!$"

Fisherman_Text_2:
# 21 "data/maps/NewBarkTown/scripts.pory"
	.string "Taiho: Heyo {PLAYER}, ya here to pick\n"
	.string "up some freshly caught magikarp for\l"
	.string "you and your mom? This batch came from\l"
	.string "upstream near the lake of rage, some of\l"
	.string "them even have a funky different color!$"
