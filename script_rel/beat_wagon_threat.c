#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	vector3 vLocal_21 = { 0f, 0f, 0f };
	char* sLocal_24[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_34[4] = { NULL, NULL, NULL, NULL };
	char* sLocal_39[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_53[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_62[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_76 = 0;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	float fLocal_80 = 0f;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	float fLocal_84 = 0f;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = -1;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 2;
	var uLocal_94 = 1;
	var uLocal_95 = 1;
	var uLocal_96 = 1;
	var uLocal_97 = 0;
	var uLocal_98 = 1;
	var uLocal_99 = 2;
	var uLocal_100 = 2;
	var uLocal_101 = 3;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 3;
	var uLocal_105 = 1;
	var uLocal_106 = 3;
	var uLocal_107 = 3;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<7> Local_110 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = -1;
	var uLocal_120 = 0;
	var uLocal_121 = -1;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = -1;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1073741824;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 1;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<17> Local_139[3];
	int iLocal_191 = 0;
	var uLocal_192 = -1;
	var uLocal_193 = 0;
	var uLocal_194 = -1;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = -1;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 1073741824;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 1;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	struct<17> Local_212[3];
	struct<21> Local_264[2];
	struct<17> Local_307[3];
	struct<193> Local_359 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_552 = 0;
	struct<32> Local_553[6];
	var uLocal_746[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_753[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	var uLocal_763[2] = { 0, 0 };
	bool bLocal_766 = false;
	struct<23> Local_767 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	bool bLocal_831 = false;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	bool bLocal_836 = false;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	float fLocal_859 = 0f;
	float fLocal_860 = 0f;
	float fLocal_861 = 0f;
	char* sLocal_862 = NULL;
	char* sLocal_863 = NULL;
	char* sLocal_864 = NULL;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	var uLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_804 = -1;
	iLocal_816 = 999;
	iLocal_817 = 999;
	iLocal_818 = 999;
	iLocal_819 = 999;
	iLocal_823 = 1;
	iLocal_905 = 1;
	Local_359.f_3 = func_1(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	Local_359.f_161 = func_3(vScriptParam_0.z, 2);
	func_4(&Local_359, 1);
	while (true)
	{
		switch (iLocal_905)
		{
			case 1:
				if (func_5(&Local_359, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_6(&Local_359, &uLocal_902, &uLocal_822);
					func_7(&Local_359, 4);
					iLocal_905 = 0;
				}
				else if (Local_359.f_160)
				{
					func_2();
				}
				break;
			
			case 0:
				if (func_8())
				{
					func_9();
					iLocal_905 = 3;
				}
				break;
			
			case 3:
				if (func_10())
				{
					switch (iLocal_14)
					{
						case 0:
							PED::DELETE_PED(uLocal_746[3]);
							break;
					}
					if (func_11())
					{
						func_12();
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_76, true);
						iLocal_905 = 4;
					}
				}
				break;
			
			case 4:
				if (!func_13(&Local_359, &uLocal_746, iLocal_14, 0, 0, 0, 1, 0))
				{
					func_2();
				}
				func_14();
				if (func_15())
				{
					func_2();
				}
				if (func_16(&Local_359, &uLocal_746, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_2();
				}
				break;
		}
		BUILTIN::WAIT(Local_359.f_158);
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

void func_2()
{
	func_17(&iLocal_820);
	if (PED::_0x91A5F9CBEBB9D936(iLocal_78))
	{
		PATHFIND::_0xD17672447692478E(iLocal_79, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_78, true);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_76);
	func_18(&iLocal_191, &Local_139);
	func_18(&iLocal_118, &Local_139);
	func_18(Local_264[0 /*21*/], &Local_307);
	func_18(Local_264[1 /*21*/], &Local_307);
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2])))
	{
		func_19(&(uLocal_746[2]), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[3])))
	{
		func_19(&(uLocal_746[3]), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[0])))
	{
		PED::_0x24C82EF607105FAA(&(uLocal_746[0]), -920810745);
		func_19(&(uLocal_746[0]), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[1])))
	{
		PED::_0x24C82EF607105FAA(&(uLocal_746[1]), -920810745);
		func_19(&(uLocal_746[1]), 1, 1);
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_761))
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_761);
	}
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[2]), 301, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[3]), 301, true);
	func_20(&Local_359, &uLocal_746, &iLocal_753, iLocal_14, uLocal_902, uLocal_822, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_21(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_22("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

int func_5(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam6 || func_23(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, bParam3, bParam4))
	{
		if (iParam6 || func_24(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_25(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_26(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_27(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_6(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 2:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		
		case 3:
			*uParam1 = 1;
			*uParam2 = 3;
			break;
		
		case 4:
			*uParam1 = 1;
			*uParam2 = 4;
			break;
		
		case 5:
			*uParam1 = 1;
			*uParam2 = 5;
			break;
	}
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

int func_8()
{
	int iVar0;
	
	switch (iLocal_904)
	{
		case 0:
			if (func_28(&Local_359))
			{
				func_29();
				func_30();
				func_31();
				func_32();
				func_33();
				func_34();
				func_35();
				func_36();
				func_37();
				iLocal_904 = 1;
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if ((Local_553[iVar0 /*32*/])->f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED((Local_553[iVar0 /*32*/])->f_1) && !STREAMING::HAS_MODEL_LOADED(1596452133))
					{
						return 0;
					}
				}
				iVar0++;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_760))
			{
				return 0;
			}
			if (!func_38(&Local_553))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

void func_9()
{
	Local_767 = { 0f, 0f, 0f };
	Local_767.f_3 = &uLocal_746[0];
	Local_767.f_8 = 4;
	Local_767.f_4 = 21030;
	Local_767.f_19 = 3;
	Local_767.f_20 = 3;
	Local_767.f_21 = 3;
	Local_767.f_22 = 3;
	Local_767.f_7 = 0;
}

int func_10()
{
	switch (iLocal_903)
	{
		case 0:
			if (func_41(func_39(&Local_359), func_40(&Local_359), &Local_553, &uLocal_746, 0, 0, -1, 1))
			{
				iLocal_903 = 1;
			}
			break;
		
		case 1:
			if (!func_42())
			{
				return 0;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_76) && !ENTITY::IS_ENTITY_DEAD(iLocal_76)) && !PROPSET::_DOES_PROPSET_EXIST(iLocal_761))
			{
				PROPSET::_0xD80FAF919A2E56EA(iLocal_76, iLocal_760);
			}
			else
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_76) && !ENTITY::IS_ENTITY_DEAD(iLocal_76))
			{
				func_43();
				func_44();
				func_45();
				func_46();
				func_47();
			}
			else
			{
				return 0;
			}
			iLocal_903 = 6;
			break;
		
		case 6:
			return 1;
	}
	return 0;
}

int func_11()
{
	switch (iLocal_14)
	{
		case 0:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110, "pbl_Loops"))
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_110, iLocal_76, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Loops", true);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110.f_1, "pbl_Loops"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Loops", true);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110.f_2, "pbl_Loops"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Loops", true);
			}
			if (((((ANIMSCENE::_0x477122B8D05E7968(Local_110, 1, 0) && ANIMSCENE::_0x477122B8D05E7968(Local_110.f_1, 1, 0)) && ANIMSCENE::_0x477122B8D05E7968(Local_110.f_2, 1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110.f_1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110.f_2, 0))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_110);
				ANIMSCENE::START_ANIM_SCENE(Local_110.f_1);
				ANIMSCENE::START_ANIM_SCENE(Local_110.f_2);
				return 1;
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110, "pbl_Base"))
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_110, iLocal_76, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Base", true);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110.f_1, "pbl_Base"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Base", true);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110.f_2, "pbl_Base"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Base", true);
			}
			if (((((ANIMSCENE::_0x477122B8D05E7968(Local_110, 1, 0) && ANIMSCENE::_0x477122B8D05E7968(Local_110.f_1, 1, 0)) && ANIMSCENE::_0x477122B8D05E7968(Local_110.f_2, 1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110.f_1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110.f_2, 0))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_110);
				ANIMSCENE::START_ANIM_SCENE(Local_110.f_1);
				ANIMSCENE::START_ANIM_SCENE(Local_110.f_2);
				return 1;
			}
			break;
	}
	return 0;
}

void func_12()
{
	switch (iLocal_14)
	{
		case 0:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Cower");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Loops");
			break;
		
		case 1:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Cower");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Back_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Back_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P3");
			break;
	}
}

int func_13(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_48(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_49(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_50(&(uParam0->f_5));
			}
			func_51(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_52(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_53(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_54(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_55(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		
		case 2:
			if (!func_56(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		
		case 3:
			break;
	}
	if (func_25(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_57(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_0x3AA24CCC0D451379(iVar2) || ((iParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_14()
{
	func_58();
	func_59();
	func_60();
	if (func_61(&(uLocal_746[0]), &(uLocal_746[4]), 1, 1) <= 1f && !PED::IS_PED_ON_MOUNT(&(uLocal_746[0])))
	{
		AITRANSPORT::_0xBA8818212633500A(&(uLocal_746[4]), 0, 1);
	}
	else
	{
		AITRANSPORT::_0xBA8818212633500A(&(uLocal_746[4]), 0, 0);
	}
	if (func_61(&(uLocal_746[1]), &(uLocal_746[5]), 1, 1) <= 1f && !PED::IS_PED_ON_MOUNT(&(uLocal_746[1])))
	{
		AITRANSPORT::_0xBA8818212633500A(&(uLocal_746[5]), 0, 1);
	}
	else
	{
		AITRANSPORT::_0xBA8818212633500A(&(uLocal_746[5]), 0, 0);
	}
	if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[0]), true) || !PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[1]), true))
	{
		func_62();
	}
	if (!iLocal_858)
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_746[2]), Local_110))
		{
			PHYSICS::_0xEAF529446488EB18(iLocal_76);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_746[2]), false))
		{
			PHYSICS::_0x5E981C764DF33117(iLocal_76, 0);
		}
	}
	else
	{
		PHYSICS::_0x5E981C764DF33117(iLocal_76, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_110))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110, 0))
		{
			fLocal_859 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_110);
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_110.f_1))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110.f_1, 0))
		{
			fLocal_860 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_110.f_1);
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_110.f_2))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110.f_2, 0))
		{
			fLocal_861 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_110.f_2);
		}
	}
}

int func_15()
{
	func_63();
	if (iLocal_792 == 2 || iLocal_792 == 4)
	{
		if (iLocal_830 == 0 || iLocal_829 == 1)
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
			{
				if (func_64())
				{
					func_65(4);
				}
			}
			else if (func_66())
			{
				func_65(4);
			}
		}
	}
	switch (iLocal_792)
	{
		case 0:
			func_67();
			break;
		
		case 1:
			func_68();
			break;
		
		case 2:
			func_69();
			break;
		
		case 3:
			func_70();
			break;
		
		case 5:
			func_71();
			break;
		
		case 4:
			func_72();
			break;
		
		case 6:
			func_73();
			break;
		
		case 8:
			break;
		
		case 7:
			func_74();
			break;
		
		case 9:
			func_75();
			break;
		
		case 11:
			Local_359.f_50 = 1;
			Local_359.f_44 = 1;
			PED::SET_PED_KEEP_TASK(&(uLocal_746[2]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_746[3]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_746[0]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_746[1]), true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_746[0]), false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_746[1]), false);
			return 1;
		
		case 10:
			Local_359.f_50 = 1;
			Local_359.f_160 = 1;
			PED::SET_PED_KEEP_TASK(&(uLocal_746[2]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_746[3]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_746[0]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_746[1]), true);
			func_2();
			break;
	}
	return 0;
}

int func_16(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_76())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_77(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_25(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_25(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_25(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_78(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_78(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

void func_17(int iParam0)
{
	if (*iParam0 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(*iParam0);
		*iParam0 = 0;
	}
}

void func_18(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;
	
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_79(iParam0, uParam1, 1);
	func_80(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_19(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_20(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_81(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_82(uParam0->f_3, 524288);
		}
	}
	if (func_83(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (iParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_83(uParam1[iVar0], 0, 0))
			{
				func_84(uParam1[iVar0], bVar3);
				if (func_85(uParam0, (*uParam1)[iVar0]))
				{
					func_86((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_83(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT(uParam1[iVar0], false, 0, 0);
						}
						else if (PED::_0xD5FE956C70FF370B(uParam1[iVar0]))
						{
							PED::_0x7DE9692C6F64CFE8(uParam1[iVar0], false, 0, 0);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_88(uParam1[iVar0], 1073741824, func_87(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_89(uParam0);
	}
	func_90(uParam0);
	if (!uParam0->f_186)
	{
		func_48(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_91(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_92(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_21(var uParam0)
{
	func_93(uParam0, 0);
	func_94(uParam0, 0);
	func_95(uParam0, 1);
	func_96(uParam0, 1);
	func_97(uParam0, 0);
	func_98(uParam0, 1);
	func_99(uParam0, 1, 1, 1);
}

var func_22(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	
	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_100(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_101(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_100(sVar0, iParam1, 0, 0, 1, 1);
}

int func_23(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_102(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_103(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_52(iParam0, 128))
			{
				if (!func_104(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_105(iParam0, &fVar1, &fVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_106(&bVar4, iParam0, fVar2, fVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_107(*uParam1))
				{
					return func_108(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_109(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_103(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_110(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		
		case 1:
			if (func_111(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_112(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		
		case 2:
			if (func_52(iParam0, 128))
			{
				if (!func_113(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_108(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_105(iParam0, &fVar1, &fVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_110(uParam1))
					{
						return func_108(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		
		case 3:
			if (func_114(iParam0, Param4.f_1, uParam1, Param4, bParam14))
			{
				func_103(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_108(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_22("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_22("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_24(var uParam0, int iParam1)
{
	if (func_25(iParam1, 256))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_172) || func_116(iParam1, func_115(uParam0), &(uParam0->f_172)))
		{
			if (func_83(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_25(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_26(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_118(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_25(uParam0->f_3, 1) && !func_25(uParam0->f_3, 32))
	{
		func_118(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_25(uParam0->f_3, 2) && !func_25(uParam0->f_3, 32))
	{
		func_118(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_119(uParam0->f_171, 1);
	}
	if (func_25(uParam0->f_3, 1))
	{
		func_118(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_120(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_27(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_121(uParam0->f_3);
	iVar1 = func_122(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	iLocal_14 = func_123(Local_359.f_3, 2, 0);
	switch (iLocal_14)
	{
		case 0:
			bLocal_766 = true;
			break;
		
		case 1:
			break;
	}
}

void func_30()
{
	(Local_553[0 /*32*/])->f_1 = -1090280091;
	(Local_553[1 /*32*/])->f_1 = -1090280091;
	(Local_553[2 /*32*/])->f_1 = -900398648;
	(Local_553[3 /*32*/])->f_1 = -292796790;
	(Local_553[4 /*32*/])->f_1 = func_124(4, 0, 1);
	(Local_553[5 /*32*/])->f_1 = func_124(4, 0, 1);
	switch (iLocal_14)
	{
		case 0:
			(Local_553[0 /*32*/])->f_3 = 811170588;
			(Local_553[1 /*32*/])->f_3 = 901285354;
			(Local_553[2 /*32*/])->f_3 = 618474282;
			break;
		
		case 1:
			(Local_553[0 /*32*/])->f_3 = 1668440413;
			(Local_553[1 /*32*/])->f_3 = 1490832433;
			(Local_553[2 /*32*/])->f_3 = -221657348;
			(Local_553[3 /*32*/])->f_3 = 1195126440;
			break;
	}
	func_125(&Local_553);
}

void func_31()
{
	iLocal_760 = 589459952;
	PROPSET::_REQUEST_PROPSET(iLocal_760);
	iLocal_762 = -1785480403;
	PROPSET::_REQUEST_PROPSET(iLocal_762);
}

void func_32()
{
}

void func_33()
{
	STREAMING::REQUEST_MODEL(1596452133, false);
}

void func_34()
{
	switch (iLocal_14)
	{
		case 0:
			sLocal_24[0] = "RE_WT_BGV_V1_WARN_A";
			sLocal_24[1] = "RE_WT_BGV_V1_WARN_B";
			sLocal_24[2] = "RE_WT_BGV_V1_WARN_C";
			sLocal_24[3] = "RE_WT_BGV_V1_WARN_D";
			sLocal_24[4] = "RE_WT_BGV_V1_WARN_E";
			sLocal_24[5] = "";
			sLocal_24[6] = "";
			sLocal_24[7] = "";
			sLocal_24[8] = "WARNING";
			sLocal_53[0] = "RE_WT_BGV_V1_ATTACK_A";
			sLocal_53[1] = "PLEAD_HOGTIED";
			sLocal_53[2] = "GENERIC_INSULT_HIGH_MALE";
			sLocal_53[3] = "RE_WT_BGV_V1_ATTACK_D";
			sLocal_53[4] = "RE_WT_BGV_V1_ATTACK_A";
			sLocal_53[5] = "RE_WT_BGV_V1_ATTACK_B";
			sLocal_53[6] = "GENERIC_INSULT_HIGH_MALE";
			sLocal_53[7] = "RE_WT_BGV_V1_ATTACK_D";
			sLocal_34[0] = "RE_WT_BGV_V1_THANK_A";
			sLocal_34[1] = "RE_WT_BGV_V1_THANK_B";
			sLocal_34[2] = "RE_WT_BGV_V1_THANK_C";
			sLocal_34[3] = "RE_WT_BGV_V1_THANK_D";
			sLocal_39[0] = "RE_WT_BGV_V1_AGGRO_A";
			sLocal_39[1] = "RE_WT_BGV_V1_AGGRO_B";
			sLocal_39[2] = "RE_WT_BGV_V1_AGGRO_C";
			sLocal_39[3] = "RE_WT_BGV_V1_AGGRO_D";
			sLocal_39[4] = "RE_WT_BGV_V1_AGGRO_E";
			sLocal_39[5] = "RE_WT_BGV_V1_AGGRO_F";
			sLocal_39[6] = "RE_WT_BGV_V1_AGGRO_G";
			sLocal_62[0] = "RE_WT_BGV_V1_PLAYER_NEG_A0";
			sLocal_62[1] = "RE_WT_BGV_V1_PLAYER_POS_A";
			sLocal_62[2] = "RE_WT_BGV_V1_PLAYER_NEG_A";
			sLocal_62[3] = "RE_WT_BGV_V1_PLAYER_ROB_A";
			sLocal_62[6] = "RE_WT_BGV_V1_PLAYER_POS_B";
			sLocal_62[7] = "RE_WT_BGV_V1_PLAYER_NEG_B";
			sLocal_62[8] = "RE_WT_BGV_V1_PLAYER_ROB_B";
			sLocal_62[4] = "ARRIVAL_COMBAT_NEUTRAL";
			sLocal_62[5] = "WARNING";
			sLocal_62[9] = "RE_WT_BGV_V1_PED_POS_B";
			sLocal_62[10] = "RE_WT_BGV_V1_PED_NEG_B";
			sLocal_62[11] = "LEAVE_ME";
			sLocal_62[12] = "RE_WT_BGV_V1_PLAYER_POS_B_B";
			break;
		
		case 1:
			sLocal_24[0] = "RE_WT_BGV_V2_WARN_A";
			sLocal_24[1] = "RE_WT_BGV_V2_WARN_B";
			sLocal_24[2] = "RE_WT_BGV_V2_WARN_C";
			sLocal_24[3] = "RE_WT_BGV_V2_WARN_D";
			sLocal_24[4] = "RE_WT_BGV_V2_WARN_E";
			sLocal_24[5] = "";
			sLocal_24[6] = "";
			sLocal_24[7] = "RE_WT_BGV_V2_WARN_H";
			sLocal_24[8] = "WARNING";
			sLocal_53[0] = "RE_WT_BGV_V2_ATTACK_A";
			sLocal_53[1] = "RE_WT_BGV_V2_ATTACK_B";
			sLocal_53[2] = "RE_WT_BGV_V2_ATTACK_C";
			sLocal_53[3] = "RE_WT_BGV_V2_ATTACK_D";
			sLocal_53[4] = "RE_WT_BGV_V2_ATTACK_A";
			sLocal_53[5] = "RE_WT_BGV_V2_ATTACK_B";
			sLocal_53[6] = "RE_WT_BGV_V2_ATTACK_C";
			sLocal_53[7] = "RE_WT_BGV_V2_ATTACK_D";
			sLocal_34[0] = "RE_WT_BGV_V2_THANK_A";
			sLocal_34[1] = "RE_WT_BGV_V2_THANK_B";
			sLocal_34[2] = "RE_WT_BGV_V2_THANK_C";
			sLocal_34[3] = "RE_WT_BGV_V2_THANK_D";
			sLocal_39[0] = "RE_WT_BGV_V2_AGGRO_A";
			sLocal_39[1] = "RE_WT_BGV_V2_AGGRO_B";
			sLocal_39[2] = "RE_WT_BGV_V2_AGGRO_C";
			sLocal_39[3] = "RE_WT_BGV_V2_AGGRO_D";
			sLocal_39[4] = "RE_WT_BGV_V2_AGGRO_E";
			sLocal_39[5] = "RE_WT_BGV_V2_AGGRO_F";
			sLocal_39[6] = "RE_WT_BGV_V2_AGGRO_G";
			sLocal_39[7] = "RE_WT_BGV_V2_AGGRO_H";
			sLocal_39[8] = "RE_WT_BGV_V2_AGGRO_I";
			sLocal_39[9] = "";
			sLocal_39[10] = "RE_WT_BGV_V2_AGGRO_K";
			sLocal_39[11] = "RE_WT_BGV_V2_AGGRO_L";
			sLocal_39[12] = "RE_WT_BGV_V2_AGGRO_M";
			sLocal_62[0] = "RE_WT_BGV_V2_PLAYER_NEG_A0";
			sLocal_62[1] = "RE_WT_BGV_V2_PLAYER_POS_A";
			sLocal_62[2] = "RE_WT_BGV_V2_PLAYER_NEG_A";
			sLocal_62[3] = "RE_WT_BGV_V2_PLAYER_ROB_A";
			sLocal_62[6] = "RE_WT_BGV_V2_PLAYER_POS_B";
			sLocal_62[7] = "RE_WT_BGV_V2_PLAYER_NEG_B";
			sLocal_62[8] = "RE_WT_BGV_V2_PLAYER_ROB_B";
			sLocal_62[4] = "WARNING";
			sLocal_62[5] = "ARRIVAL_COMBAT_TRAP_NEUTRAL";
			sLocal_62[9] = "RE_WT_BGV_V2_PED_POS_B";
			sLocal_62[10] = "RE_WT_BGV_V2_PED_NEG_B";
			sLocal_62[11] = "RE_WT_BGV_V2_PED_ROB_B";
			break;
	}
}

void func_35()
{
	Local_553[0 /*32*/] = 22;
	Local_553[1 /*32*/] = 22;
	Local_553[2 /*32*/] = 4;
	Local_553[3 /*32*/] = 5;
	switch (Local_359.f_51.f_4)
	{
		case 0:
			vLocal_21 = { -2288.66f, -410.42f, 156.67f };
			fLocal_77 = 22.98f;
			vLocal_81 = { -2287.99f, -413.93f, 157.75f };
			fLocal_84 = 16f;
			(Local_553[0 /*32*/])->f_6 = { -2287.31f, -412.72f, 156.64f };
			(Local_553[0 /*32*/])->f_9 = 179.5f;
			(Local_553[1 /*32*/])->f_6 = { -2286.44f, -419.27f, 156.7f };
			(Local_553[1 /*32*/])->f_9 = 38f;
			(Local_553[4 /*32*/])->f_6 = { -2284.35f, -417.57f, 156.75f };
			(Local_553[4 /*32*/])->f_9 = 156.28f;
			if (!bLocal_766)
			{
				(Local_553[5 /*32*/])->f_6 = { -2286.6f, -404.74f, 157.58f };
				(Local_553[5 /*32*/])->f_9 = -107.16f;
			}
			else
			{
				(Local_553[5 /*32*/])->f_6 = { -2292.66f, -399.51f, 157.33f };
				(Local_553[5 /*32*/])->f_9 = -65.67f;
			}
			vLocal_15 = { -2067.9f, -442.96f, 153.19f };
			vLocal_18 = { -2247.13f, -223.26f, 175.28f };
			break;
		
		case 1:
			vLocal_21 = { -1880.98f, 382.62f, 114.56f };
			fLocal_77 = 192f;
			vLocal_81 = { -1880.98f, 382.62f, 114.56f };
			fLocal_84 = 192f;
			(Local_553[0 /*32*/])->f_6 = { -1888.47f, 382.64f, 113.36f };
			(Local_553[0 /*32*/])->f_9 = 0f;
			(Local_553[1 /*32*/])->f_6 = { -1886.39f, 380.91f, 113.34f };
			(Local_553[1 /*32*/])->f_9 = -115.16f;
			if (!bLocal_766)
			{
				(Local_553[5 /*32*/])->f_6 = { -1884.71f, 374.3f, 114.9f };
				(Local_553[5 /*32*/])->f_9 = 86.85f;
			}
			else
			{
				(Local_553[5 /*32*/])->f_6 = { -1878.43f, 369.3f, 115.32f };
				(Local_553[5 /*32*/])->f_9 = 86.08f;
			}
			(Local_553[4 /*32*/])->f_6 = { -1888.59f, 388.4f, 113.21f };
			(Local_553[4 /*32*/])->f_9 = 29.1f;
			vLocal_15 = { -1979.408f, 490.6195f, 116.774f };
			vLocal_18 = { -1711.286f, 395.1502f, 108.0253f };
			break;
		
		case 2:
			vLocal_21 = { -2660.73f, 216.36f, 152.1f };
			fLocal_77 = 10.98f;
			vLocal_81 = { -2660.73f, 216.36f, 152.1f };
			fLocal_84 = 10.98f;
			(Local_553[0 /*32*/])->f_6 = { -2646.9f, 208.82f, 152.26f };
			(Local_553[0 /*32*/])->f_9 = -57.87f;
			(Local_553[1 /*32*/])->f_6 = { -2660.45f, 212.52f, 152.38f };
			(Local_553[1 /*32*/])->f_9 = 71.07f;
			if (!bLocal_766)
			{
				(Local_553[5 /*32*/])->f_6 = { -2657.35f, 223.84f, 151.57f };
				(Local_553[5 /*32*/])->f_9 = 54.43f;
			}
			else
			{
				(Local_553[5 /*32*/])->f_6 = { -2661.73f, 228.21f, 152.44f };
				(Local_553[5 /*32*/])->f_9 = -133.24f;
			}
			(Local_553[4 /*32*/])->f_6 = { -2654.4f, 208.38f, 153.07f };
			(Local_553[4 /*32*/])->f_9 = -149.77f;
			vLocal_15 = { -2762.45f, -170.17f, 150.41f };
			vLocal_18 = { -2624.75f, 445.07f, 144.33f };
			break;
		
		case 3:
			vLocal_21 = { -1630.11f, 306.9f, 103.33f };
			fLocal_77 = 351.19f;
			vLocal_81 = { -1630.11f, 306.9f, 103.33f };
			fLocal_84 = 351.19f;
			(Local_553[0 /*32*/])->f_6 = { -1624.68f, 247.9f, 104.5f };
			(Local_553[0 /*32*/])->f_9 = -126.23f;
			(Local_553[1 /*32*/])->f_6 = { -1624.08f, 242.83f, 104.55f };
			(Local_553[1 /*32*/])->f_9 = 11.46f;
			if (!bLocal_766)
			{
				(Local_553[5 /*32*/])->f_6 = { -1628.61f, 316.47f, 104.32f };
				(Local_553[5 /*32*/])->f_9 = 28.92f;
			}
			else
			{
				(Local_553[5 /*32*/])->f_6 = { -1623.49f, 310.23f, 104.5f };
				(Local_553[5 /*32*/])->f_9 = 28.31f;
			}
			(Local_553[4 /*32*/])->f_6 = { -1626.64f, 297.73f, 104.6f };
			(Local_553[4 /*32*/])->f_9 = -7.87f;
			vLocal_15 = { -1527.19f, 164.44f, 99.01f };
			vLocal_18 = { -1619.901f, 371.5253f, 103.5383f };
			break;
		
		case 4:
			vLocal_21 = { -1921.31f, -666.25f, 117.43f };
			fLocal_77 = 186.08f;
			vLocal_81 = { -1921.31f, -666.25f, 117.43f };
			fLocal_84 = 186.08f;
			(Local_553[0 /*32*/])->f_6 = { -1921.54f, -681.62f, 117.1f };
			(Local_553[0 /*32*/])->f_9 = -73.99f;
			(Local_553[1 /*32*/])->f_6 = { -1919.2f, -679.21f, 117.24f };
			(Local_553[1 /*32*/])->f_9 = 96.49f;
			if (!bLocal_766)
			{
				(Local_553[5 /*32*/])->f_6 = { -1925.89f, -672.12f, 118.08f };
				(Local_553[5 /*32*/])->f_9 = 62.86f;
			}
			else
			{
				(Local_553[5 /*32*/])->f_6 = { -1919.7f, -678.02f, 118.28f };
				(Local_553[5 /*32*/])->f_9 = 62.15f;
			}
			(Local_553[4 /*32*/])->f_6 = { -1925.18f, -656.65f, 119.73f };
			(Local_553[4 /*32*/])->f_9 = -39.69f;
			vLocal_15 = { -1807.05f, -803.64f, 103.43f };
			vLocal_18 = { -1972.71f, -553.17f, 142.9f };
			break;
		
		case 5:
			vLocal_21 = { -2695.14f, -309.57f, 149.31f };
			fLocal_77 = 47.07f;
			vLocal_81 = { -2695.14f, -309.57f, 149.31f };
			fLocal_84 = 47.07f;
			(Local_553[0 /*32*/])->f_6 = { -2687.93f, -302.83f, 148.68f };
			(Local_553[0 /*32*/])->f_9 = -73.99f;
			(Local_553[1 /*32*/])->f_6 = { -2692.44f, -301.44f, 148.14f };
			(Local_553[1 /*32*/])->f_9 = 96.49f;
			if (!bLocal_766)
			{
				(Local_553[5 /*32*/])->f_6 = { -2695.13f, -301.26f, 148.9f };
				(Local_553[5 /*32*/])->f_9 = -86.79f;
			}
			else
			{
				(Local_553[5 /*32*/])->f_6 = { -2705.15f, -297.78f, 148.9f };
				(Local_553[5 /*32*/])->f_9 = -37.33f;
			}
			(Local_553[4 /*32*/])->f_6 = { -2683.29f, -313.76f, 149.47f };
			(Local_553[4 /*32*/])->f_9 = -87.82f;
			vLocal_15 = { -2524.796f, -283.6344f, 152.113f };
			vLocal_18 = { -2762.467f, -195.4687f, 148.97f };
			break;
	}
	func_126(&((Local_553[0 /*32*/])->f_22));
	func_126(&((Local_553[1 /*32*/])->f_22));
	func_126(&((Local_553[4 /*32*/])->f_22));
	func_126(&((Local_553[5 /*32*/])->f_22));
}

void func_36()
{
	switch (iLocal_14)
	{
		case 0:
			Local_110.f_4 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_man_man";
			Local_110.f_5 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_man_robber01";
			Local_110.f_6 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_man_robber02";
			break;
		
		case 1:
			Local_110.f_4 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_couple_couple";
			Local_110.f_5 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_couple_robber01";
			Local_110.f_6 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_couple_robber02";
			break;
	}
}

void func_37()
{
	func_128(Local_139[0 /*17*/], func_127(7), &(sLocal_62[1]), -163964935, 0, 0, 0, 1, 0);
	func_128(Local_139[1 /*17*/], "INTERACT_INTERVENE", &(sLocal_62[0]), 648122183, 0, 0, 0, 1, 0);
	func_128(Local_139[2 /*17*/], "INTERACT_ROB", &(sLocal_62[3]), -1616532217, 0, 0, 0, 1, 0);
	func_129(Local_139[2 /*17*/], 1);
	func_128(Local_212[0 /*17*/], func_127(7), &(sLocal_62[1]), -163964935, 0, 0, 0, 1, 0);
	func_128(Local_212[1 /*17*/], "INTERACT_INTERVENE", &(sLocal_62[0]), 648122183, 0, 0, 0, 1, 0);
	func_128(Local_212[2 /*17*/], "INTERACT_ROB", &(sLocal_62[3]), -1616532217, 0, 0, 0, 1, 0);
	func_129(Local_212[2 /*17*/], 1);
	func_128(Local_307[0 /*17*/], "RE_INTER_POS", &(sLocal_62[6]), -163964935, 0, 0, 0, 1, 0);
	func_128(Local_307[1 /*17*/], "RE_INTER_ANTAGONIZE", &(sLocal_62[7]), 648122183, 0, 0, 0, 1, 0);
	func_128(Local_307[2 /*17*/], "INTERACT_ROB", &(sLocal_62[8]), -1616532217, 0, 0, 0, 1, 0);
	func_130(Local_307[1 /*17*/], 0, 0);
	func_130(Local_307[0 /*17*/], 0, 0);
	func_129(Local_307[2 /*17*/], 1);
}

bool func_38(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_131((*iParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

Vector3 func_39(var uParam0)
{
	return uParam0->f_51;
}

float func_40(var uParam0)
{
	return uParam0->f_51.f_3;
}

int func_41(vector3 vParam0, float fParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	
	if (*iParam4 != *uParam5)
	{
		return 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_132() || !func_133((*iParam4)[iVar0 /*32*/], (*uParam5)[iVar0], vParam0, fParam3, iParam6, bParam9))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_42()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_76))
	{
		return 1;
	}
	else
	{
		iLocal_76 = VEHICLE::CREATE_VEHICLE(1596452133, vLocal_21, fLocal_77, true, true, false, false);
		func_134(iLocal_76);
	}
	return 0;
}

void func_43()
{
	ENTITY::_0x203BEFFDBE12E96A(iLocal_76, vLocal_21, fLocal_77, 1, false, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_76, 0f);
	WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_746[0]), true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_746[1]), true, true);
	func_136(&(uLocal_746[1]), func_135(0, 1056964608, 1065353216), 99, 1, 0, 1056964608, 1065353216, 0);
	func_136(&(uLocal_746[0]), func_137(131072, 1056964608, 1065353216), 99, 0, 0, 1056964608, 1065353216, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_746[0]), 1222652248);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_746[1]), 1222652248);
	PED::SET_PED_CAN_BE_TARGETTED(&(uLocal_746[4]), false);
	PED::SET_PED_CAN_BE_TARGETTED(&(uLocal_746[5]), false);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[1]), 315, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[1]), 297, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[1]), 130, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[1]), 317, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[1]), 301, false);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[0]), 347, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[1]), 347, true);
	PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_746[0]), 0);
	PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_746[1]), 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[0]), 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[0]), 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[1]), 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[1]), 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[0]), 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[1]), 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[0]), 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[1]), 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[0]), 0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_746[1]), 0, false);
	func_138(&(uLocal_746[0]), 200);
	func_138(&(uLocal_746[1]), 200);
	func_139(&(uLocal_746[0]), -1014049156, 1, 0);
	func_139(&(uLocal_746[1]), -1014049156, 1, 0);
	func_138(&(uLocal_746[2]), 100);
	func_139(&(uLocal_746[2]), 1478239863, 1, 0);
	func_140(&(uLocal_746[0]), 0);
	func_140(&(uLocal_746[1]), 0);
	func_141(&((Local_553[2 /*32*/])->f_22));
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[2]), 146, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[4]), 358, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_746[5]), 358, true);
	func_142(&(uLocal_746[4]), uLocal_763[0], 1, 1);
	func_142(&(uLocal_746[5]), uLocal_763[1], 1, 1);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(&(uLocal_746[4]), 270352);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(&(uLocal_746[5]), 270352);
	switch (iLocal_14)
	{
		case 0:
			AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_746[0]), "0713_G_M_M_UniRanchers_01_WHITE_03");
			AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_746[1]), "0714_G_M_M_UniRanchers_01_WHITE_04");
			AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_746[2]), "0595_A_M_M_Civ_White_AVOID_11");
			func_143(&(uLocal_746[2]), &Local_359, 0);
			func_143(&(uLocal_746[0]), &Local_359, 0);
			func_143(&(uLocal_746[1]), &Local_359, 0);
			PED::SET_PED_INTO_VEHICLE(&(uLocal_746[2]), iLocal_76, -1);
			break;
		
		case 1:
			AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_746[0]), "0711_G_M_M_UniRanchers_01_WHITE_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_746[1]), "0712_G_M_M_UniRanchers_01_WHITE_02");
			AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_746[2]), "0927_A_M_M_Civ_Poor_White_AVOID_10");
			AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_746[3]), "REFND_VOLUNTEER");
			func_141(&((Local_553[3 /*32*/])->f_22));
			PED::SET_PED_CONFIG_FLAG(&(uLocal_746[3]), 146, true);
			PED::SET_PED_INTO_VEHICLE(&(uLocal_746[2]), iLocal_76, -1);
			PED::SET_PED_INTO_VEHICLE(&(uLocal_746[3]), iLocal_76, 0);
			func_143(&(uLocal_746[3]), &Local_359, 0);
			func_143(&(uLocal_746[2]), &Local_359, 0);
			func_143(&(uLocal_746[0]), &Local_359, 0);
			break;
	}
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_746[0]), true, 0f);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_746[1]), true, 0f);
	func_144(&(uLocal_746[0]), 1);
	func_144(&(uLocal_746[1]), 1);
}

void func_44()
{
	func_145(&(Local_359.f_5), 1);
	func_96(&(Local_359.f_5), 1);
	func_94(&(Local_359.f_5), 1);
	func_93(&(Local_359.f_5), 1);
	func_146(&(Local_359.f_5), 1);
	func_95(&(Local_359.f_5), 1);
	func_147(&(Local_359.f_5), 1);
	func_148(&(Local_359.f_5), 0);
	func_98(&(Local_359.f_5), 1);
	func_149(&(Local_359.f_5), 1);
	func_150(&(Local_359.f_5), &(uLocal_746[2]), 0);
	func_150(&(Local_359.f_5), &(uLocal_746[3]), 0);
	func_151(&(Local_359.f_5), &(uLocal_746[0]), &(uLocal_746[4]), 1);
	func_151(&(Local_359.f_5), &(uLocal_746[1]), &(uLocal_746[5]), 1);
}

void func_45()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { (Local_359.f_51 - 15f), (Local_359.f_51.f_1 - 15f), (Local_359.f_51.f_2 - 15f) };
	vVar3 = { (Local_359.f_51 + 15f), (Local_359.f_51.f_1 + 15f), (Local_359.f_51.f_2 + 15f) };
	vVar6 = { Local_359.f_51, Local_359.f_51.f_1, Local_359.f_51.f_2 };
	fLocal_80 = 20f;
	switch (Local_359.f_51.f_4)
	{
		case 0:
			vVar6 = { -2289.91f, -322.24f, 156.1f };
			break;
	}
	iLocal_79 = VOLUME::_CREATE_VOLUME_BOX(vVar6, 0f, 0f, 0f, fLocal_80, fLocal_80, fLocal_80);
	PATHFIND::_0xC1799FAFD2FDF52B(iLocal_79, 0, 0, 0);
	iLocal_78 = func_152(vVar0, vVar3, vVar6, fLocal_80, 0, 0);
}

void func_46()
{
	vector3 vVar0;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_76, true, false) };
	switch (iLocal_14)
	{
		case 0:
			Local_110 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_4, 0, 0, false, true);
			Local_110.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_5, 64, 0, false, true);
			Local_110.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_6, 64, 0, false, true);
			MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_76, true, false), &(vLocal_81.f_2), 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110, 0f, 0f, 0f, 0f, 0f, 0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110.f_1, vVar0.x, vVar0.y, vLocal_81.z, 0f, 0f, fLocal_84, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110.f_2, vVar0.x, vVar0.y, vLocal_81.z, 0f, 0f, fLocal_84, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "Victim", &(uLocal_746[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "chuckwagon000x", iLocal_76, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_1, "Robber01", &(uLocal_746[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_2, "Robber02", &(uLocal_746[1]), 0);
			if ((!ANIMSCENE::_0x477122B8D05E7968(Local_110, 1, 0) && !ANIMSCENE::_0x477122B8D05E7968(Local_110.f_1, 1, 0)) && !ANIMSCENE::_0x477122B8D05E7968(Local_110.f_2, 1, 0))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110.f_1);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Internal_Loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Cower_Bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_1, "Internal_Loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_2, "Internal_Loop", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Loops");
			break;
		
		case 1:
			Local_110 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_4, 0, 0, false, true);
			Local_110.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_5, 0, 0, false, true);
			Local_110.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_6, 64, 0, false, true);
			MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_76, true, false), &(vLocal_81.f_2), 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110, 0f, 0f, 0f, 0f, 0f, 0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110.f_1, vVar0.x, vVar0.y, vLocal_81.z, 0f, 0f, fLocal_84, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110.f_2, vVar0.x, vVar0.y, vLocal_81.z, 0f, 0f, fLocal_84, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "Victim", &(uLocal_746[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "Victim_Female", &(uLocal_746[3]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "chuckwagon000x", iLocal_76, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_1, "Robber01", &(uLocal_746[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_2, "Robber02", &(uLocal_746[1]), 0);
			if ((!ANIMSCENE::_0x477122B8D05E7968(Local_110, 1, 0) && !ANIMSCENE::_0x477122B8D05E7968(Local_110.f_1, 1, 0)) && !ANIMSCENE::_0x477122B8D05E7968(Local_110.f_2, 1, 0))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110.f_1);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Internal_Loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Cower_Bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_1, "Internal_Loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_2, "Internal_Loop", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "BaseBool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_1, "BaseBool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_2, "BaseBool", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Base");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Base");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Base");
			break;
	}
}

void func_47()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 10;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (iVar1 != 0 && VEHICLE::DOES_EXTRA_EXIST(iLocal_76, iVar1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_76, iVar1, true);
		}
		iVar1++;
	}
}

void func_48(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { func_39(uParam0) };
	iVar3 = func_91(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_49(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_50(var uParam0)
{
	func_95(uParam0, 1);
	func_153(uParam0, 20);
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_52(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_53(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_117(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_154())
	{
		func_155(1);
	}
	func_156(iParam2, uParam0->f_43);
	func_157(iParam2, 0, 0, 0, 0);
	if (func_158(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_81(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_159(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_54(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_55(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (uParam0->f_178 && func_160())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_52(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_53(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_54(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173))
		{
			if (!func_161(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_162(uParam0, bVar0);
		func_163(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_164(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_53(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_54(&(uParam0->f_121));
		}
	}
}

int func_56(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_25(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_165())
			{
				fVar0 = 15f;
			}
		}
		if (func_166(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_167(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_166(uParam2, fVar1))
		{
			if (!func_168(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_169(uParam2->f_3, 2) && func_170(2))
		{
			return 0;
		}
		if (func_25(iParam0, 4194304) || func_25(iParam0, 33554432))
		{
			if (func_171(1))
			{
				return 0;
			}
		}
	}
	if (func_172(Global_35))
	{
		return 0;
	}
	if (func_173(0, 1, 1) && !func_174(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_25(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_175(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_167(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_176())
		{
			return 0;
		}
		iVar2 = func_178(func_177());
		if (func_179(iVar2))
		{
			if (func_180(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_181(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_182(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_57(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (func_183(uParam0->f_51))
	{
		func_184(uParam0->f_51, 0);
		fVar0 = func_185(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_186());
		fVar1 = func_87(!func_25(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_188(iVar2, func_187(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

void func_58()
{
	if (func_189() == 0)
	{
		if ((((func_190(&(uLocal_746[2]), 0, &(Local_359.f_5), &iLocal_906, 0, 0) || func_190(&(uLocal_746[3]), 0, &(Local_359.f_5), &iLocal_906, 0, 0)) || func_60()) || FIRE::IS_ENTITY_ON_FIRE(iLocal_76)) || func_191())
		{
			if (iLocal_906 != 256 || (!func_83(&(uLocal_746[0]), 0, 1) && !func_83(&(uLocal_746[1]), 0, 1)))
			{
				if (iLocal_792 != 5)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_746[2]));
					TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_746[3]));
					iLocal_858 = 1;
				}
				else if (iLocal_906 == 2 || FIRE::IS_ENTITY_ON_FIRE(iLocal_76))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_746[2]));
					TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_746[3]));
					iLocal_858 = 1;
				}
			}
		}
	}
	if (iLocal_858)
	{
		func_192();
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = func_194(uLocal_746[0], &iLocal_118, 50f, &Local_139, &(Local_359.f_192), 0f, 1, 0, 0, func_193(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
	iVar1 = func_194(uLocal_746[1], &iLocal_191, 50f, &Local_212, &(Local_359.f_192), 0f, 1, 0, 0, func_193(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
	iVar2 = func_194(uLocal_746[2], Local_264[0 /*21*/], 30f, &Local_307, &(Local_359.f_192), 0f, 1, 0, 0, func_193(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_746[3])))
	{
		iVar3 = func_194(uLocal_746[3], Local_264[1 /*21*/], 30f, &Local_307, &(Local_359.f_192), 0f, 1, 0, 0, func_193(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
	}
	if (iLocal_792 != 5 && !iLocal_858)
	{
		switch (iLocal_795)
		{
			case 0:
				switch (iLocal_796)
				{
					case 0:
						func_129(Local_139[0 /*17*/], 0);
						func_130(Local_139[0 /*17*/], 0, 0);
						func_129(Local_212[0 /*17*/], 0);
						func_130(Local_212[0 /*17*/], 0, 0);
						switch (iVar0)
						{
							case 1:
								func_195(10, 1682361219, 0, 0, 0, 0, 1065353216, 0);
								iLocal_853 = 1;
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[0]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[1]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								iLocal_796 = 2;
								break;
						}
						switch (iVar1)
						{
							case 1:
								func_195(10, 1682361219, 0, 0, 0, 0, 1065353216, 0);
								iLocal_853 = 1;
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[0]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[1]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								iLocal_796 = 2;
								break;
						}
						break;
					
					case 2:
						func_130(Local_139[1 /*17*/], 0, 0);
						func_130(Local_212[1 /*17*/], 0, 0);
						func_196();
						if (!func_197(Global_35, 0))
						{
							if (bLocal_766)
							{
								func_198(&(uLocal_746[2]), Global_35, "RE_WT_BGV_B1_PED_NEG_ILO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_65(5);
							iLocal_796 = 4;
						}
						break;
					
					case 4:
						iLocal_796 = 0;
						break;
				}
				break;
			
			case 1:
				switch (iLocal_796)
				{
					case 0:
						if (!func_197(&(uLocal_746[0]), 0) && !func_197(&(uLocal_746[1]), 0))
						{
							func_130(Local_139[0 /*17*/], 1, 0);
							func_130(Local_139[1 /*17*/], 1, 0);
							func_130(Local_139[2 /*17*/], 0, 0);
							func_130(Local_212[0 /*17*/], 1, 0);
							func_130(Local_212[1 /*17*/], 1, 0);
							func_130(Local_212[2 /*17*/], 0, 0);
							switch (iVar0)
							{
								case 0:
									func_130(Local_139[0 /*17*/], 0, 0);
									func_130(Local_139[1 /*17*/], 0, 0);
									func_130(Local_139[2 /*17*/], 0, 0);
									func_130(Local_212[0 /*17*/], 0, 0);
									func_130(Local_212[1 /*17*/], 0, 0);
									func_130(Local_212[2 /*17*/], 0, 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[0]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[1]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
									iLocal_796 = 1;
									break;
								
								case 1:
									func_130(Local_139[0 /*17*/], 0, 0);
									func_130(Local_139[1 /*17*/], 0, 0);
									func_130(Local_139[2 /*17*/], 0, 0);
									func_130(Local_212[0 /*17*/], 0, 0);
									func_130(Local_212[1 /*17*/], 0, 0);
									func_130(Local_212[2 /*17*/], 0, 0);
									iLocal_853 = 1;
									func_195(10, 1682361219, 0, 0, 0, 0, 1065353216, 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[0]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[1]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
									iLocal_796 = 2;
									break;
							}
							switch (iVar1)
							{
								case 0:
									func_130(Local_139[0 /*17*/], 0, 0);
									func_130(Local_139[1 /*17*/], 0, 0);
									func_130(Local_139[2 /*17*/], 0, 0);
									func_130(Local_212[0 /*17*/], 0, 0);
									func_130(Local_212[1 /*17*/], 0, 0);
									func_130(Local_212[2 /*17*/], 0, 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[0]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[1]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
									iLocal_796 = 1;
									break;
								
								case 1:
									func_130(Local_139[0 /*17*/], 0, 0);
									func_130(Local_139[1 /*17*/], 0, 0);
									func_130(Local_139[2 /*17*/], 0, 0);
									func_130(Local_212[0 /*17*/], 0, 0);
									func_130(Local_212[1 /*17*/], 0, 0);
									func_130(Local_212[2 /*17*/], 0, 0);
									iLocal_853 = 1;
									func_195(10, 1682361219, 0, 0, 0, 0, 1065353216, 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[0]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[1]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
									iLocal_796 = 2;
									break;
							}
						}
						else
						{
							func_130(Local_139[0 /*17*/], 0, 0);
							func_130(Local_139[1 /*17*/], 0, 0);
							func_130(Local_139[2 /*17*/], 0, 0);
							func_130(Local_212[0 /*17*/], 0, 0);
							func_130(Local_212[1 /*17*/], 0, 0);
							func_130(Local_212[2 /*17*/], 0, 0);
						}
						break;
					
					case 1:
						if (!func_197(Global_35, 0))
						{
							func_199();
							if (bLocal_766)
							{
								if (func_200(&(uLocal_746[1]), Global_35, &(sLocal_62[4]), 0f, 0))
								{
									iLocal_795 = 4;
									iLocal_796 = 0;
								}
							}
							else if (func_200(&(uLocal_746[1]), Global_35, &(sLocal_62[4]), 0f, 2))
							{
								iLocal_795 = 4;
								iLocal_796 = 0;
							}
						}
						break;
					
					case 2:
						if (!func_197(Global_35, 0))
						{
							func_199();
							if (bLocal_766)
							{
								if (func_200(&(uLocal_746[1]), Global_35, &(sLocal_62[5]), 0f, 1))
								{
									iLocal_851 = 1;
									func_65(5);
									iLocal_796 = 4;
								}
							}
							else if (func_200(&(uLocal_746[1]), Global_35, &(sLocal_62[5]), 0f, 1))
							{
								iLocal_851 = 1;
								func_65(5);
								iLocal_796 = 4;
							}
						}
						break;
					
					case 4:
						func_199();
						iLocal_795 = 4;
						iLocal_796 = 0;
						break;
				}
				break;
			
			case 2:
				switch (iLocal_796)
				{
					case 0:
						switch (iVar2)
						{
							case 0:
								func_130(Local_307[0 /*17*/], 0, 0);
								func_130(Local_307[1 /*17*/], 0, 0);
								func_130(Local_307[2 /*17*/], 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								iLocal_796 = 1;
								break;
							
							case 1:
								func_130(Local_307[0 /*17*/], 0, 0);
								func_130(Local_307[1 /*17*/], 0, 0);
								func_130(Local_307[2 /*17*/], 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								iLocal_796 = 2;
								break;
							
							case 2:
								func_130(Local_307[0 /*17*/], 0, 0);
								func_130(Local_307[1 /*17*/], 0, 0);
								func_130(Local_307[2 /*17*/], 0, 0);
								func_195(3, 0, 0, "RE_HONOR_ROB", &(uLocal_746[2]), 0, 1065353216, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								iLocal_796 = 3;
								break;
						}
						switch (iVar3)
						{
							case 0:
								func_130(Local_307[0 /*17*/], 0, 0);
								func_130(Local_307[1 /*17*/], 0, 0);
								func_130(Local_307[2 /*17*/], 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								iLocal_796 = 1;
								break;
							
							case 1:
								func_130(Local_307[0 /*17*/], 0, 0);
								func_130(Local_307[1 /*17*/], 0, 0);
								func_130(Local_307[2 /*17*/], 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								iLocal_796 = 2;
								break;
							
							case 2:
								func_130(Local_307[0 /*17*/], 0, 0);
								func_130(Local_307[1 /*17*/], 0, 0);
								func_130(Local_307[2 /*17*/], 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								func_195(3, 0, 0, "RE_HONOR_ROB", &(uLocal_746[2]), 0, 1065353216, 0);
								iLocal_796 = 3;
								break;
						}
						break;
					
					case 1:
						if (!func_197(Global_35, 0))
						{
							if (!iLocal_855)
							{
								if (!func_197(Global_35, 0))
								{
									func_198(&(uLocal_746[2]), Global_35, &(sLocal_62[9]), "", -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									if (bLocal_766)
									{
										iLocal_855 = 1;
									}
									else
									{
										iLocal_796 = 4;
									}
								}
							}
							else if (!func_197(&(uLocal_746[2]), 0))
							{
								func_198(Global_35, &(uLocal_746[2]), &(sLocal_62[12]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_796 = 4;
							}
						}
						break;
					
					case 2:
						if (!func_197(Global_35, 0))
						{
							if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_62[10]), 0f, 0))
							{
								func_130(Local_307[2 /*17*/], 1, 0);
								iLocal_796 = 0;
								iLocal_795 = 3;
							}
						}
						break;
					
					case 3:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
						if (!func_197(Global_35, 0))
						{
							if (bLocal_766)
							{
								if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_62[11]), 0f, 0))
								{
									iLocal_852 = 1;
									iLocal_858 = 1;
									iLocal_796 = 4;
								}
							}
							else if (func_200(&(uLocal_746[3]), Global_35, &(sLocal_62[11]), 0f, 0))
							{
								iLocal_852 = 1;
								iLocal_858 = 1;
								iLocal_796 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
				break;
			
			case 3:
				switch (iLocal_796)
				{
					case 0:
						switch (iVar2)
						{
							case 2:
								func_130(Local_307[0 /*17*/], 0, 0);
								func_130(Local_307[1 /*17*/], 0, 0);
								func_130(Local_307[2 /*17*/], 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								func_195(3, 0, 0, "RE_HONOR_ROB", &(uLocal_746[2]), 0, 1065353216, 0);
								iLocal_796 = 3;
								break;
						}
						switch (iVar3)
						{
							case 2:
								func_130(Local_307[0 /*17*/], 0, 0);
								func_130(Local_307[1 /*17*/], 0, 0);
								func_130(Local_307[2 /*17*/], 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
								func_195(3, 0, 0, "RE_HONOR_ROB", &(uLocal_746[2]), 0, 1065353216, 0);
								iLocal_796 = 3;
								break;
						}
						break;
					
					case 3:
						if (!func_197(Global_35, 0))
						{
							if (bLocal_766)
							{
								if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_62[11]), 0f, 0))
								{
									iLocal_852 = 1;
									iLocal_858 = 1;
									iLocal_796 = 4;
								}
							}
							else if (func_200(&(uLocal_746[3]), Global_35, &(sLocal_62[11]), 0f, 0))
							{
								iLocal_852 = 1;
								iLocal_858 = 1;
								iLocal_796 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
	}
}

int func_60()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	switch (iLocal_797)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_76))
			{
				if (func_201(&iLocal_76))
				{
					iLocal_797 = 1;
				}
			}
			break;
		
		case 1:
			VEHICLE::_0xA19447D83294E29F(iLocal_76, &iVar0, &iVar1);
			if (iVar1 < 2)
			{
				iLocal_797 = 2;
			}
			break;
		
		case 2:
			return 1;
	}
	return 0;
}

float func_61(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_62()
{
	if (Local_359.f_46 == 0)
	{
		if ((((func_202(&uLocal_746, &(Local_359.f_5), &iLocal_906, &uLocal_821, 0, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_746[4]), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_746[5]), Global_35, 1, 1)) || func_203(&(uLocal_746[1]), 1, 1) <= 1f) || iLocal_858)
		{
			func_204(&(Local_359.f_5), &iLocal_906);
			Local_359.f_46 = 1;
			func_65(5);
			return 1;
		}
	}
	return 0;
}

void func_63()
{
	if (!Local_359.f_46)
	{
		if (iLocal_792 >= 4)
		{
			if (!iLocal_834)
			{
				if (iLocal_835)
				{
					func_195(2, 0, 0, "Ignored Victim", 0, 0, 1065353216, 0);
					iLocal_834 = 1;
				}
				else if (func_205(Global_35, Local_359.f_51, 1) < 25f)
				{
					if ((bLocal_766 && !iLocal_858) && !func_83(&(uLocal_746[2]), 0, 1))
					{
						func_195(2, 0, 0, "Watched Murder", 0, 0, 1065353216, 0);
						iLocal_834 = 1;
					}
				}
			}
		}
		else if (!bLocal_766)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2])))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(&(uLocal_746[2]), &Local_767);
				if (func_197(&(uLocal_746[0]), 0))
				{
					Local_767.f_3 = &uLocal_746[0];
				}
				else if (func_197(&(uLocal_746[1]), 0))
				{
					Local_767.f_3 = &uLocal_746[1];
				}
			}
		}
	}
}

int func_64()
{
	func_206();
	switch (iLocal_807)
	{
		case 0:
			if (fLocal_859 >= 0.56f)
			{
				iLocal_807++;
			}
			break;
		
		case 1:
			if (fLocal_859 >= 0.63f)
			{
				iLocal_807++;
			}
			break;
		
		case 2:
			if (fLocal_859 >= 0.72f)
			{
				iLocal_807++;
			}
			break;
		
		case 3:
			if (fLocal_859 >= 0.74f)
			{
				iLocal_807++;
			}
			break;
		
		case 4:
			if (fLocal_859 >= 0.77f)
			{
				iLocal_829 = 1;
				iLocal_807++;
			}
			break;
		
		case 5:
			if (fLocal_859 >= 0.82f)
			{
				iLocal_807++;
			}
			break;
		
		case 6:
			if (fLocal_859 >= 0.89f)
			{
				iLocal_807++;
			}
			break;
		
		case 7:
			iLocal_807++;
			return 1;
	}
	return 0;
}

void func_65(int iParam0)
{
	iLocal_792 = iParam0;
}

int func_66()
{
	func_206();
	switch (iLocal_813)
	{
		case 0:
			if (fLocal_859 >= 0.25f)
			{
				iLocal_813++;
			}
			break;
		
		case 1:
			if (fLocal_859 >= 0.39f)
			{
				iLocal_813++;
			}
			break;
		
		case 2:
			if (fLocal_859 >= 0.4f)
			{
				iLocal_813++;
			}
			break;
		
		case 3:
			if (fLocal_859 >= 0.51f)
			{
				iLocal_829 = 1;
				iLocal_813++;
			}
			break;
		
		case 4:
			if (fLocal_859 >= 0.62f)
			{
				iLocal_813++;
			}
			break;
		
		case 5:
			if (fLocal_859 >= 0.75f)
			{
				iLocal_813++;
			}
			break;
		
		case 6:
			iLocal_813++;
			return 1;
	}
	return 0;
}

void func_67()
{
	if (Local_359.f_182 == 0)
	{
		if (func_61(Global_35, &(uLocal_746[0]), 1, 1) < 100f)
		{
			AUDIO::_0xCCE219C922737BFA("distant_gunshots", Local_359.f_51, "TRE1_Sounds", 0, 0, 1, 0);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_110, "Wagon", iLocal_76);
			func_207(&Local_359, &(uLocal_746[0]), 1);
		}
	}
	if (func_208(&Local_359, 1f, 80f, 45f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Action_P0", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Action_P0", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Action_P0", true);
		iLocal_820 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(513747494, &(uLocal_746[0]), 0f, 50f, 50f, 15f, -1082130432, 1127481344, 0, 0, -1, -1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_76, false);
		func_65(1);
	}
}

void func_68()
{
	func_209();
	func_210();
	func_211();
	if (iLocal_830 == 1 || iLocal_849)
	{
		switch (iLocal_14)
		{
			case 0:
				func_212();
				func_213();
				break;
			
			case 1:
				func_214();
				func_215();
				break;
		}
	}
	if (iLocal_830 == 0)
	{
		switch (iLocal_14)
		{
			case 0:
				if (iLocal_846 == 1)
				{
					func_216();
				}
				else
				{
					func_217();
				}
				break;
			
			case 1:
				if (iLocal_846 == 1)
				{
					func_218();
				}
				else
				{
					func_219();
				}
				break;
		}
		if (iLocal_828 == 1)
		{
			switch (iLocal_14)
			{
				case 0:
					func_65(2);
					break;
				
				case 1:
					func_65(3);
					break;
			}
		}
	}
}

void func_69()
{
	func_210();
	func_209();
	func_211();
	if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
	{
		if (fLocal_860 >= 0.58f)
		{
			iLocal_848 = 1;
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[2]), true) || iLocal_829 == 1)
	{
		func_130(Local_139[0 /*17*/], 0, 0);
		func_130(Local_139[1 /*17*/], 0, 0);
		func_220(Local_139[0 /*17*/], "RE_INTER_POS");
		func_220(Local_139[1 /*17*/], "RE_INTER_ANTAGONIZE");
		func_130(Local_212[0 /*17*/], 0, 0);
		func_130(Local_212[1 /*17*/], 0, 0);
		func_220(Local_212[0 /*17*/], "RE_INTER_POS");
		func_220(Local_212[1 /*17*/], "RE_INTER_ANTAGONIZE");
		if (iLocal_795 != 4)
		{
			iLocal_795 = 4;
		}
	}
	if (iLocal_830 == 1)
	{
		iLocal_849 = 1;
	}
	if (iLocal_849 == 1)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[2]), true))
		{
			func_221();
		}
		else
		{
			func_222();
		}
	}
	func_65(4);
}

void func_70()
{
	func_209();
	func_210();
	func_211();
	if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
	{
		if (fLocal_860 >= 0.58f)
		{
			iLocal_848 = 1;
		}
	}
	if (iLocal_830 == 1)
	{
		iLocal_849 = 1;
	}
	if (iLocal_849 == 1)
	{
		if (iLocal_824 == 0)
		{
			func_221();
		}
		else
		{
			func_222();
		}
	}
	if (iLocal_824 == 1)
	{
		func_130(Local_139[0 /*17*/], 0, 0);
		func_130(Local_139[1 /*17*/], 0, 0);
		func_220(Local_139[0 /*17*/], "RE_INTER_POS");
		func_220(Local_139[1 /*17*/], "RE_INTER_ANTAGONIZE");
		func_130(Local_212[0 /*17*/], 0, 0);
		func_130(Local_212[1 /*17*/], 0, 0);
		func_220(Local_212[0 /*17*/], "RE_INTER_POS");
		func_220(Local_212[1 /*17*/], "RE_INTER_ANTAGONIZE");
		if (iLocal_795 != 4)
		{
			iLocal_795 = 4;
		}
	}
	if (iLocal_830 == 0)
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
		{
			if (func_223())
			{
				func_65(4);
			}
		}
		else if (func_224())
		{
			func_65(4);
		}
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_746[0]), Local_110.f_1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uLocal_746[1]), Local_110.f_2))
	{
		func_65(4);
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	func_225();
	func_226();
	func_58();
	func_196();
	Local_359.f_44 = 1;
	func_227(uLocal_746[0], &iLocal_118, &Local_139, 1, 1);
	func_227(uLocal_746[1], &iLocal_191, &Local_212, 1, 1);
	if (func_228())
	{
		if (!PED::IS_PED_ON_MOUNT(&(uLocal_746[0])))
		{
			if (!func_229(&(uLocal_746[4]), 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_746[4]), iVar0, 3f, 3f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
	if (func_230())
	{
		if (!PED::IS_PED_ON_MOUNT(&(uLocal_746[1])))
		{
			if (!func_229(&(uLocal_746[5]), 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_746[5]), iVar1, 2f, 2f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
		}
	}
	switch (iLocal_14)
	{
		case 0:
			func_231();
			break;
		
		case 1:
			if (iLocal_833 == 0)
			{
				func_232();
			}
			break;
	}
	if (func_233())
	{
		AITRANSPORT::_0xBA8818212633500A(&(uLocal_746[4]), 0, 0);
		AITRANSPORT::_0xBA8818212633500A(&(uLocal_746[5]), 0, 0);
		if (ENTITY::IS_ENTITY_DEAD(VEHICLE::_0xA8BA0BAE0173457B(iLocal_76, 0)) && ENTITY::IS_ENTITY_DEAD(VEHICLE::_0xA8BA0BAE0173457B(iLocal_76, 1)))
		{
			func_65(9);
		}
		switch (iLocal_14)
		{
			case 0:
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[2]), true))
				{
					if (!func_234(&uLocal_865))
					{
						func_235(&uLocal_865);
					}
					else if ((!func_197(Global_35, 0) && !func_197(&(uLocal_746[2]), 0)) && func_236(&uLocal_865) > 4f)
					{
						func_198(&(uLocal_746[2]), Global_35, &(sLocal_34[0]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Cower_Bool", true, false);
						func_195(13, 0, 0, "Saved Victim", 0, 0, 1065353216, 0);
						bLocal_836 = true;
						iLocal_817 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[0]));
						iLocal_816 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[0]));
						iLocal_819 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[1]));
						iLocal_818 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[1]));
						iLocal_795 = 2;
						iLocal_796 = 0;
						func_235(&uLocal_865);
						func_65(6);
					}
				}
				else
				{
					func_65(9);
				}
				break;
			
			case 1:
				if ((!PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[2]), true) && !PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[3]), true)) && iLocal_824 == 0)
				{
					if (!func_234(&uLocal_865))
					{
						func_235(&uLocal_865);
					}
					else if ((!func_197(Global_35, 0) && !func_197(&(uLocal_746[2]), 0)) && func_236(&uLocal_865) > 3f)
					{
						func_198(&(uLocal_746[2]), Global_35, &(sLocal_34[0]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Cower_Bool", true, false);
						bLocal_836 = true;
						func_195(13, 0, 0, "Saved Victim", 0, 0, 1065353216, 0);
						iLocal_817 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[0]));
						iLocal_816 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[0]));
						iLocal_819 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[1]));
						iLocal_818 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[1]));
						iLocal_795 = 2;
						iLocal_796 = 0;
						func_65(6);
					}
				}
				else
				{
					PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2048, false);
					PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2048, false);
					PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 65536, true);
					func_65(9);
				}
				break;
		}
	}
	if (iLocal_824 == 1)
	{
		if (!func_229(&(uLocal_746[3]), 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[3]), &(uLocal_746[1]), 3, 0, -1082130432, -1, 0);
		}
		if (!func_229(&(uLocal_746[2]), 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[2]), &(uLocal_746[1]), 3, 0, -1082130432, -1, 0);
		}
	}
	if (func_237() || func_60())
	{
		if (!func_229(&(uLocal_746[3]), 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_899);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_899);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, &(uLocal_746[1]), 3, 0, -1082130432, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_899);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_746[3]), iLocal_899);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_899);
		}
		if (!func_229(&(uLocal_746[2]), 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_898);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_898);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, &(uLocal_746[1]), 3, 0, -1082130432, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_898);
			TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_746[2]), iLocal_898, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_898);
		}
		PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 65536, true);
		PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2048, false);
		PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 65536, true);
		PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2048, false);
	}
	switch (iLocal_14)
	{
		case 1:
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[2]), true) && iLocal_832 == 0)
			{
				iLocal_832 = 1;
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2048, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[3]), &(uLocal_746[1]), 3, 0, -1082130432, -1, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2048, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[2]), &(uLocal_746[1]), 3, 0, -1082130432, -1, 0);
			}
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[3]), true) && iLocal_832 == 0)
			{
				iLocal_832 = 1;
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2048, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[2]), &(uLocal_746[1]), 3, 0, -1082130432, -1, 0);
			}
			break;
	}
}

void func_72()
{
	func_222();
	func_209();
	func_211();
	Local_359.f_44 = 1;
	if (iLocal_830 == 1)
	{
		func_238();
	}
	switch (iLocal_798)
	{
		case 0:
			iLocal_798 = 1;
			break;
		
		case 1:
			iLocal_798 = 2;
			break;
		
		case 2:
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[0])))
	{
		func_239(&(uLocal_746[0]), Global_35, &uLocal_85, -1, 10);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[1])))
	{
		func_239(&(uLocal_746[1]), Global_35, &uLocal_85, -1, 10);
	}
	if (func_240())
	{
		func_18(&iLocal_118, &Local_139);
		PED::_0x24C82EF607105FAA(&(uLocal_746[0]), -920810745);
		func_19(&(uLocal_746[0]), 1, 1);
		func_18(&iLocal_191, &Local_212);
		PED::_0x24C82EF607105FAA(&(uLocal_746[1]), -920810745);
		func_19(&(uLocal_746[1]), 1, 1);
		func_142(&(uLocal_746[4]), uLocal_763[0], 0, 0);
		func_142(&(uLocal_746[5]), uLocal_763[1], 0, 0);
		func_17(&iLocal_820);
	}
	switch (iLocal_14)
	{
		case 0:
			if ((ENTITY::IS_ENTITY_AT_COORD(&(uLocal_746[0]), vLocal_15, 2f, 2f, 2f, false, true, 0) || (func_203(&(uLocal_746[0]), 1, 1) >= 100f && func_203(&(uLocal_746[1]), 1, 1) >= 100f)) || (PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[0]), true) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[1]), true)))
			{
				func_65(11);
			}
			break;
		
		case 1:
			func_58();
			break;
	}
}

void func_73()
{
	if (iLocal_858)
	{
		return;
	}
	func_241();
	if (!func_234(&uLocal_874))
	{
		func_235(&uLocal_874);
	}
	if (func_242(&uLocal_865) >= 3f || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_746[2]), Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_746[3]), Global_35, 1, 1)))
	{
		func_58();
	}
	if (func_243())
	{
		switch (iLocal_14)
		{
			case 0:
				if (fLocal_859 >= 0.99f && iLocal_823 == 1)
				{
					iLocal_823 = 0;
				}
				if (iLocal_823 == 0)
				{
					func_244();
				}
				break;
			
			case 1:
				if (fLocal_859 >= 0.99f && iLocal_823 == 1)
				{
					iLocal_823 = 0;
				}
				if (iLocal_823 == 0)
				{
					func_245();
				}
				break;
		}
	}
	if (func_242(&uLocal_874) >= 8f)
	{
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(&(uLocal_746[2]), iLocal_76, vLocal_18, 3f, 2621463, 6, 3f, 5f, 0);
		func_129(Local_307[2 /*17*/], 0);
		func_129(Local_307[0 /*17*/], 0);
		func_129(Local_307[1 /*17*/], 0);
		func_130(Local_307[2 /*17*/], 0, 0);
		func_130(Local_307[0 /*17*/], 1, 0);
		func_130(Local_307[1 /*17*/], 1, 0);
		func_65(7);
	}
}

void func_74()
{
	if (func_246())
	{
		func_247();
	}
	func_241();
	if (MAP::DOES_BLIP_EXIST(&(iLocal_753[2])))
	{
		MAP::REMOVE_BLIP(iLocal_753[2]);
	}
	if (MAP::DOES_BLIP_EXIST(&(iLocal_753[3])))
	{
		MAP::REMOVE_BLIP(iLocal_753[3]);
	}
	if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[2]), true) || !PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[3]), true))
	{
		func_58();
	}
}

void func_75()
{
	func_58();
}

int func_76()
{
	if (!func_248(Global_1395482->f_1))
	{
		return 0;
	}
	return func_249(Global_1395482->f_1, 32);
}

bool func_77(int iParam0)
{
	if (func_25(iParam0, 1))
	{
		return false;
	}
	return (1 == func_250(iParam0) || 2 == func_250(iParam0));
}

float func_78(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_79(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_251(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_252(iParam0, 0);
		}
	}
}

void func_80(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_253(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_251(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

char* func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		
		case 75:
			return "REBBR";
		
		case 1:
			return "REAM";
		
		case 2:
			return "REAP";
		
		case 3:
			return "REAMD";
		
		case 76:
			return "REBE";
		
		case 4:
			return "REBT";
		
		case 77:
			return "REBTE";
		
		case 5:
			return "REBAT";
		
		case 6:
			return "REBOT";
		
		case 7:
			return "REBNT";
		
		case 78:
			return "REBGP";
		
		case 8:
			return "REBUB";
		
		case 9:
			return "RECA";
		
		case 10:
			return "RECG";
		
		case 11:
			return "RECP";
		
		case 12:
			return "RECHR";
		
		case 79:
			return "RECQ";
		
		case 13:
			return "RECCT";
		
		case 14:
			return "RECW";
		
		case 80:
			return "REDAA";
		
		case 81:
			return "REDAB";
		
		case 82:
			return "REDAS";
		
		case 83:
			return "REDEB";
		
		case 84:
			return "REDJ";
		
		case 15:
			return "REDLP";
		
		case 85:
			return "REDIB";
		
		case 86:
			return "REDOM";
		
		case 87:
			return "REDM";
		
		case 16:
			return "REPND";
		
		case 88:
			return "REDD";
		
		case 89:
			return "REDB";
		
		case 90:
			return "REDW";
		
		case 17:
			return "REESC";
		
		case 18:
			return "REEX";
		
		case 91:
			return "REFF";
		
		case 19:
			return "REFT";
		
		case 92:
			return "REFR";
		
		case 20:
			return "REFO";
		
		case 21:
			return "REFD";
		
		case 93:
			return "REFND";
		
		case 22:
			return "REFC";
		
		case 23:
			return "REGCR";
		
		case 94:
			return "REGPE";
		
		case 24:
			return "REGP";
		
		case 119:
			return "REHOC";
		
		case 27:
			return "REHOR";
		
		case 28:
			return "REHR";
		
		case 29:
			return "REIK";
		
		case 30:
			return "REIR";
		
		case 95:
			return "REIT";
		
		case 31:
			return "REKV";
		
		case 32:
			return "REKD";
		
		case 33:
			return "REKR";
		
		case 34:
			return "REKS";
		
		case 35:
			return "RELRU";
		
		case 96:
			return "REETE";
		
		case 36:
			return "RELK";
		
		case 37:
			return "RELP";
		
		case 97:
			return "RELD";
		
		case 98:
			return "RELDR";
		
		case 38:
			return "RELF";
		
		case 39:
			return "RELM";
		
		case 40:
			return "REMC";
		
		case 41:
			return "REMUC";
		
		case 42:
			return "RENS";
		
		case 99:
			return "REOTE";
		
		case 100:
			return "REOR";
		
		case 43:
			return "REOL";
		
		case 44:
			return "REOT";
		
		case 101:
			return "REPA";
		
		case 102:
			return "REPT";
		
		case 103:
			return "REPP";
		
		case 45:
			return "RESB";
		
		case 104:
			return "REPS";
		
		case 46:
			return "REPCA";
		
		case 47:
			return "REPCS";
		
		case 48:
			return "REPO";
		
		case 105:
			return "REPCH";
		
		case 49:
			return "REPBR";
		
		case 50:
			return "REPW";
		
		case 106:
			return "REPH";
		
		case 107:
			return "RERI";
		
		case 51:
			return "RERP";
		
		case 108:
			return "RERD";
		
		case 53:
			return "RESA";
		
		case 54:
			return "RESAF";
		
		case 56:
			return "RESWA";
		
		case 55:
			return "RESW";
		
		case 57:
			return "RESS";
		
		case 109:
			return "RESO";
		
		case 58:
			return "RESKP";
		
		case 110:
			return "RESAM";
		
		case 59:
			return "RESH";
		
		case 60:
			return "REHU";
		
		case 61:
			return "RESSH";
		
		case 62:
			return "RESR";
		
		case 111:
			return "RESTF";
		
		case 112:
			return "REKT";
		
		case 67:
			return "RETC";
		
		case 68:
			return "RETP";
		
		case 113:
			return "REBUR";
		
		case 114:
			return "RETWC";
		
		case 115:
			return "RETR";
		
		case 117:
			return "RETT";
		
		case 116:
			return "RETWW";
		
		case 63:
			return "RETA";
		
		case 64:
			return "RETRB";
		
		case 65:
			return "RETW";
		
		case 66:
			return "RETH";
		
		case 69:
			return "REVC";
		
		case 70:
			return "REWTH";
		
		case 71:
			return "REWA";
		
		case 118:
			return "REWC";
		
		case 72:
			return "REWH";
		
		case 73:
			return "REWM";
		
		case 74:
			return "REWMC";
		
		default:
			break;
	}
	return "XXXX";
}

void func_82(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

bool func_83(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_254(iParam0, iParam1);
}

void func_84(int iParam0, bool bParam1)
{
	if (func_83(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_255(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_85(var uParam0, var uParam1)
{
	if (func_25(uParam0->f_3, 16777216))
	{
		if (func_256(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == 1478983280)
		{
			return 1;
		}
	}
	return 0;
}

void func_86(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_87(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_88(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1935630->f_12 && (!bParam4 || func_83(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_87(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_257(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_89(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_171))
	{
		func_258(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_259(uParam0);
	func_260(uParam0);
	func_261(uParam0);
	if (!func_262(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_184(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_263();
	}
	if (!func_264(uParam0->f_3) && !func_25(uParam0->f_3, 256))
	{
		func_265(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_266(uParam0->f_173);
	func_266(uParam0->f_172);
}

void func_90(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_91(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					
					case 1:
						return -2064800864;
					
					case 2:
						return -1459648117;
					
					default:
						break;
				}
				return 1764738688;
			
			case 1:
				return -1738452225;
			
			case 2:
				return -823209843;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					
					case 1:
						return 1082838675;
					
					default:
						break;
				}
				return -163609424;
			
			case 4:
				return -230454431;
			
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					
					case 1:
						return -779276698;
					
					default:
						break;
				}
				return 1848195968;
			
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					
					case 1:
						return -561787596;
					
					default:
						break;
				}
				return 199182688;
			
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					
					case 1:
						return 1805609920;
					
					default:
						break;
				}
				return -1157729664;
			
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					
					case 1:
						return -1805473967;
					
					default:
						break;
				}
				return -185185008;
			
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					
					default:
						break;
				}
				return 1331739776;
			
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					
					default:
						break;
				}
				return -2125510912;
			
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					
					case 1:
						return 1422484995;
					
					default:
						break;
				}
				return 2012422144;
			
			case 12:
				return 1004100858;
			
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					
					case 1:
						return 1719865048;
					
					default:
						break;
				}
				return -462840960;
			
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					
					case 1:
						return -1541809666;
					
					default:
						break;
				}
				return -2063125376;
			
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					
					case 1:
						return 396925591;
					
					case 2:
						return -1318629866;
					
					default:
						break;
				}
				return 237843904;
			
			case 16:
				return 1583531269;
			
			case 17:
				return -728402510;
			
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					
					case 1:
						return 1895496017;
					
					default:
						break;
				}
				return -1622801152;
			
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					
					default:
						break;
				}
				return -110846632;
			
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					
					case 1:
						return 136987683;
					
					case 2:
						return -405984699;
					
					default:
						break;
				}
				return -1296870656;
			
			case 21:
				return 856957155;
			
			case 22:
				return 199192985;
			
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					
					case 1:
						return -548752013;
					
					case 2:
						return -1799015093;
					
					case 3:
						return -115167180;
					
					default:
						break;
				}
				return 1480735360;
			
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					
					case 1:
						return -195398422;
					
					default:
						break;
				}
				return 1888284288;
			
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					
					case 1:
						return -140925504;
					
					default:
						break;
				}
				return 1262841600;
			
			case 26:
				return -1065165983;
			
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					
					case 1:
						return -879341975;
					
					case 2:
						return 812000379;
					
					default:
						break;
				}
				return 1119637248;
			
			case 28:
				return -1641231995;
			
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					
					case 1:
						return -2001368627;
					
					default:
						break;
				}
				return 1411817728;
			
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					
					case 1:
						return -413778780;
					
					default:
						break;
				}
				return 260689376;
			
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					
					case 1:
						return -1268334164;
					
					default:
						break;
				}
				return 302505024;
			
			case 32:
				return -800701784;
			
			case 33:
				return -1599472750;
			
			case 34:
				return 239043929;
			
			case 35:
				return -1534174498;
			
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					
					case 1:
						return 1873758089;
					
					default:
						break;
				}
				return 1179130240;
			
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					
					case 1:
						return -2073786745;
					
					default:
						break;
				}
				return -959962496;
			
			case 38:
				return 1895786957;
			
			case 39:
				return -2058137475;
			
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					
					case 1:
						return 149442199;
					
					case 2:
						return 978666390;
					
					case 3:
						return -1076604521;
					
					case 4:
						return 919455489;
					
					default:
						break;
				}
				return -1427408128;
			
			case 41:
				return 598461796;
			
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					
					case 1:
						return -632377398;
					
					default:
						break;
				}
				return -190635712;
			
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					
					case 1:
						return -456339986;
					
					case 2:
						return 458545376;
					
					case 3:
						return 610100918;
					
					default:
						break;
				}
				return -2132368512;
			
			case 44:
				return 544369376;
			
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					
					case 1:
						return -1472914811;
					
					default:
						break;
				}
				return 1517869312;
			
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					
					case 1:
						return 1336213836;
					
					default:
						break;
				}
				return 1497529856;
			
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					
					default:
						break;
				}
				return 516059168;
			
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					
					default:
						break;
				}
				return 138359424;
			
			case 49:
				return 1602493990;
			
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					
					case 1:
						return 2125427011;
					
					case 2:
						return 371707271;
					
					case 3:
						return -731143567;
					
					case 4:
						return -742996004;
					
					default:
						break;
				}
				return -773614592;
			
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					
					case 1:
						return -770317277;
					
					default:
						break;
				}
				return -1496303104;
			
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					
					case 1:
						return -189901396;
					
					default:
						break;
				}
				return 855036416;
			
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					
					case 1:
						return -316021716;
					
					default:
						break;
				}
				return 1818026880;
			
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					
					case 1:
						return -170394045;
					
					default:
						break;
				}
				return -1865567744;
			
			case 55:
				return 1762656414;
			
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					
					case 1:
						return 2050912022;
					
					case 2:
						return -631458463;
					
					default:
						break;
				}
				return 1729892352;
			
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					
					case 1:
						return 1070551761;
					
					case 2:
						return -1249279900;
					
					default:
						break;
				}
				return 1256394752;
			
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					
					case 1:
						return -239132243;
					
					default:
						break;
				}
				return -2137622144;
			
			case 59:
				return -2018341642;
			
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					
					default:
						break;
				}
				return 922910144;
			
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					
					default:
						break;
				}
				return 1967427328;
			
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					
					case 1:
						return 1877863225;
					
					default:
						break;
				}
				return 1397209856;
			
			case 63:
				return -1618254924;
			
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					
					case 1:
						return 2139528616;
					
					default:
						break;
				}
				return 1380866816;
			
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					
					case 1:
						return 2073650155;
					
					default:
						break;
				}
				return 1432305280;
			
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					
					default:
						break;
				}
				return 1650308608;
			
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					
					case 1:
						return -1797377830;
					
					default:
						break;
				}
				return 685182784;
			
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					
					case 1:
						return -522278917;
					
					default:
						break;
				}
				return -2001177728;
			
			case 69:
				return -2137572125;
			
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					
					case 1:
						return -1062366341;
					
					default:
						break;
				}
				return -948494848;
			
			case 71:
				return -774894224;
			
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					
					case 1:
						return 28828972;
					
					default:
						break;
				}
				return -1846020608;
			
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					
					case 1:
						return 460031053;
					
					case 2:
						return 381656699;
					
					default:
						break;
				}
				return -188029312;
			
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					
					default:
						break;
				}
				return -1829585536;
			
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					
					case 1:
						return -311112952;
					
					case 2:
						return -682765316;
					
					case 3:
						return -2127446978;
					
					default:
						break;
				}
				return 1338777472;
			
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					
					case 1:
						return 20416722;
					
					default:
						break;
				}
				return 1293249792;
			
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					
					default:
						break;
				}
				return 235904384;
			
			case 80:
				return -334565466;
			
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					
					case 1:
						return 245875704;
					
					default:
						break;
				}
				return 1046770304;
			
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					
					case 1:
						return 1062398415;
					
					default:
						break;
				}
				return -2047991552;
			
			case 83:
				return -1752276745;
			
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					
					case 1:
						return -1090928636;
					
					default:
						break;
				}
				return -1021157760;
			
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					
					case 1:
						return 1092461253;
					
					default:
						break;
				}
				return 900051136;
			
			case 86:
				return 1417655457;
			
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					
					case 1:
						return 220332139;
					
					default:
						break;
				}
				return 1359760512;
			
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					
					case 1:
						return -812497188;
					
					default:
						break;
				}
				return 1616003072;
			
			case 89:
				return -69702063;
			
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					
					default:
						break;
				}
				return -1670654720;
			
			case 91:
				return -331264815;
			
			case 92:
				return -1217205534;
			
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					
					case 1:
						return -368935814;
					
					default:
						break;
				}
				return -1021345856;
			
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					
					case 1:
						return -972169639;
					
					case 2:
						return -673250821;
					
					case 3:
						return 161473916;
					
					default:
						break;
				}
				return -1329933952;
			
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					
					default:
						break;
				}
				return 1248360320;
			
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					
					case 1:
						return 368673822;
					
					case 2:
						return 578628915;
					
					case 3:
						return 689154642;
					
					case 4:
						return 471198511;
					
					case 5:
						return 967199063;
					
					case 6:
						return -38616787;
					
					case 7:
						return -1294637989;
					
					default:
						break;
				}
				return -84111088;
			
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					
					case 1:
						return -436408638;
					
					default:
						break;
				}
				return 1995021696;
			
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					
					case 1:
						return 6449957;
					
					default:
						break;
				}
				return -1853564800;
			
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					
					case 1:
						return -31873580;
					
					case 2:
						return -1922690045;
					
					case 3:
						return 515105064;
					
					default:
						break;
				}
				return -1759022208;
			
			case 100:
				return -307424281;
			
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					
					case 1:
						return 1573993134;
					
					default:
						break;
				}
				return -1402545280;
			
			case 102:
				return -1979014350;
			
			case 103:
				return 2096137174;
			
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					
					case 1:
						return 2076430727;
					
					case 2:
						return -1266577036;
					
					default:
						break;
				}
				return 493009408;
			
			case 105:
				return 1152564685;
			
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					
					case 1:
						return 2046057828;
					
					case 2:
						return -526712830;
					
					case 3:
						return -242317110;
					
					case 4:
						return 1729814355;
					
					case 5:
						return 1868875718;
					
					case 6:
						return -785635151;
					
					case 7:
						return 1586170447;
					
					case 8:
						return -291036947;
					
					default:
						break;
				}
				return -832026176;
			
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					
					case 1:
						return 875440489;
					
					default:
						break;
				}
				return -508430848;
			
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					
					case 1:
						return 1920169067;
					
					default:
						break;
				}
				return -227796128;
			
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					
					case 1:
						return -1012076841;
					
					default:
						break;
				}
				return -871899648;
			
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					
					case 1:
						return 121209110;
					
					default:
						break;
				}
				return 14115413;
			
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					
					case 1:
						return -1113682855;
					
					case 2:
						return -1801389871;
					
					case 3:
						return -180725957;
					
					case 4:
						return 1811628790;
					
					default:
						break;
				}
				return 2016864128;
			
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					
					default:
						break;
				}
				return -717212864;
			
			case 113:
				return 1487351956;
			
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					
					case 1:
						return 1685893021;
					
					case 2:
						return -711771194;
					
					case 3:
						return 146337879;
					
					default:
						break;
				}
				return 205846784;
			
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					
					case 1:
						return -39469638;
					
					default:
						break;
				}
				return 1483441280;
			
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					
					case 1:
						return -2101774133;
					
					default:
						break;
				}
				return -815072896;
			
			case 117:
				return -689015496;
			
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					
					case 1:
						return -1607469655;
					
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_267() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_1), 16384);
	}
	else
	{
		func_51(&(uParam0->f_1), 16384);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_1), 2048);
	}
	else
	{
		func_51(&(uParam0->f_1), 2048);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_1), 256);
	}
	else
	{
		func_51(&(uParam0->f_1), 256);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(uParam0, 16);
	}
	else
	{
		func_268(uParam0, 67108864);
		func_268(uParam0, 16);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_1), 128);
	}
	else
	{
		func_51(&(uParam0->f_1), 128);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(uParam0, 256);
	}
	else
	{
		func_268(uParam0, 256);
	}
}

void func_99(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_51(uParam0, 268435456);
	}
	else
	{
		func_268(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_51(uParam0, 1073741824);
	}
	else
	{
		func_268(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_51(uParam0, 536870912);
	}
	else
	{
		func_268(uParam0, 536870912);
	}
}

var func_100(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_101(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_269(sParam1));
}

Vector3 func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_117(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_270(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_271(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_103(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (func_25(iParam0, 32))
	{
		if (func_272(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_273(Global_35, &(uParam1->f_12)) };
				if (!func_107(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_274(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_185(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_186());
		if (func_275(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_188(iVar0, func_187(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_188(iVar0, func_187(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_25(iParam0, 1))
		{
			func_276(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_277(iParam0);
}

int func_104(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/])->f_1 != -1)
		{
			func_278(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_52(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_279(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_279(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return 1;
}

void func_105(int iParam0, float fParam1, float fParam2, var uParam3, bool bParam4)
{
	switch (func_280(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*uParam3 = 2500;
			break;
		
		case 1:
			if (!func_25(iParam0, 1))
			{
				if (func_52(iParam0, 2))
				{
				}
			}
			func_281(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		
		case 2:
			func_282(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		
		case 3:
			func_282(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		
		default:
			break;
	}
	if (func_77(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_106(int iParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*iParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_270(iParam1))
	{
		if (!func_283(iParam1, iVar0))
		{
			vVar4 = { func_102(iParam1, iVar0) };
			if (!func_107(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_112(fVar8, iParam1))
				{
					*iParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_284(iParam1, vVar4, fParam2, fParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_107(vVar4))
	{
	}
	return vVar1;
}

int func_107(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_108(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_22("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_109(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < func_270(iParam0))
	{
		vVar1 = { func_102(iParam0, iVar0) };
		if (func_285(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_110(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	vVar2 = { *uParam0 };
	func_286(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_287(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_107(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_288(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *(uParam0->f_12[iVar1 /*3*/]) };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_108(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_112(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	fVar3 = (fParam0 * fParam0);
	func_105(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_25(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_113(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*uParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return 1;
	}
	return 0;
}

int func_114(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_289(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_290(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_291(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_292(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_115(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_116(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

bool func_117(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_118(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_119(int iParam0, int iParam1)
{
	if (func_293(iParam0))
	{
		return;
	}
	if (func_294(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36601 >= 10)
	{
		Global_36601 = 0;
	}
	(Global_36580[Global_36601 /*2*/])->f_1 = iParam1;
	Global_36580[Global_36601 /*2*/] = iParam0;
	Global_36601++;
}

void func_120(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_268(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 1:
			return 4;
		
		case 2:
			return 1;
		
		case 3:
			return 8;
		
		case 75:
			return 9;
		
		case 76:
			return 3;
		
		case 4:
			return 3;
		
		case 77:
			return 3;
		
		case 8:
			return 17;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 5;
		
		case 78:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 7;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 6;
		
		case 14:
			return 4;
		
		case 79:
			return 2;
		
		case 15:
			return 10;
		
		case 80:
			return 3;
		
		case 81:
			return 1;
		
		case 82:
			return 2;
		
		case 83:
			return 6;
		
		case 84:
			return 6;
		
		case 85:
			return 2;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 16:
			return 1;
		
		case 88:
			return 1;
		
		case 89:
			return 6;
		
		case 90:
			return 14;
		
		case 18:
			return 6;
		
		case 17:
			return 2;
		
		case 91:
			return 2;
		
		case 19:
			return 3;
		
		case 92:
			return 6;
		
		case 20:
			return 2;
		
		case 21:
			return 5;
		
		case 93:
			return 1;
		
		case 22:
			return 5;
		
		case 23:
			return 1;
		
		case 94:
			return 1;
		
		case 24:
			return 2;
		
		case 119:
			return 2;
		
		case 27:
			return 6;
		
		case 28:
			return 6;
		
		case 29:
			return 6;
		
		case 95:
			return 7;
		
		case 30:
			return 2;
		
		case 112:
			return 5;
		
		case 31:
			return 3;
		
		case 32:
			return 4;
		
		case 33:
			return 17;
		
		case 34:
			return 4;
		
		case 35:
			return 14;
		
		case 96:
			return 3;
		
		case 36:
			return 4;
		
		case 37:
			return 1;
		
		case 97:
			return 3;
		
		case 98:
			return 3;
		
		case 38:
			return 4;
		
		case 39:
			return 1;
		
		case 40:
			return 3;
		
		case 41:
			return 14;
		
		case 42:
			return 1;
		
		case 99:
			return 6;
		
		case 100:
			return 2;
		
		case 43:
			return 6;
		
		case 44:
			return 13;
		
		case 101:
			return 5;
		
		case 102:
			return 4;
		
		case 103:
			return 2;
		
		case 45:
			return 2;
		
		case 104:
			return 3;
		
		case 46:
			return 4;
		
		case 47:
			return 1;
		
		case 48:
			return 2;
		
		case 105:
			return 2;
		
		case 49:
			return 8;
		
		case 50:
			return 9;
		
		case 106:
			return 16;
		
		case 107:
			return 16;
		
		case 51:
			return 6;
		
		case 108:
			return 5;
		
		case 53:
			return 10;
		
		case 54:
			return 8;
		
		case 56:
			return 4;
		
		case 55:
			return 1;
		
		case 57:
			return 14;
		
		case 109:
			return 2;
		
		case 58:
			return 1;
		
		case 110:
			return 5;
		
		case 59:
			return 15;
		
		case 60:
			return 3;
		
		case 61:
			return 13;
		
		case 62:
			return 2;
		
		case 111:
			return 4;
		
		case 67:
			return 6;
		
		case 68:
			return 3;
		
		case 113:
			return 7;
		
		case 114:
			return 1;
		
		case 115:
			return 3;
		
		case 117:
			return 6;
		
		case 116:
			return 1;
		
		case 63:
			return 6;
		
		case 64:
			return 22;
		
		case 65:
			return 2;
		
		case 66:
			return 2;
		
		case 69:
			return 5;
		
		case 70:
			return 8;
		
		case 71:
			return 8;
		
		case 118:
			return 4;
		
		case 72:
			return 4;
		
		case 73:
			return 4;
		
		case 74:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_122(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (bParam0)
	{
		return func_295(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_296(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_296(), iVar3);
		if (func_297(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_123(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_298(iParam0) % iParam1);
	}
	return (func_299(iParam0) % iParam1);
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = func_300(iParam0);
	if ((func_3(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -247265944;
					break;
				
				case 1:
					iVar2 = 1696286663;
					break;
				
				case 2:
					iVar2 = -1038436471;
					break;
				
				case 3:
					iVar2 = -85890205;
					break;
				
				case 4:
					iVar2 = -727455979;
					break;
				
				case 5:
					iVar2 = -1679658797;
					break;
				
				default:
					if (func_301())
					{
						iVar2 = -247265944;
					}
					else
					{
						iVar2 = 1696286663;
					}
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1072019803;
					break;
				
				case 1:
					iVar2 = -1038436471;
					break;
				
				case 2:
					iVar2 = -1261814606;
					break;
				
				case 3:
					iVar2 = -1554827654;
					break;
				
				default:
					if (func_301())
					{
						iVar2 = -1038436471;
					}
					else
					{
						iVar2 = 1072019803;
					}
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 2024948086;
					break;
				
				case 1:
					iVar2 = -1265030920;
					break;
				
				case 2:
					iVar2 = 937246805;
					break;
				
				case 3:
					iVar2 = -1599683008;
					break;
				
				case 4:
					iVar2 = -450053710;
					break;
				
				default:
					if (func_301())
					{
						iVar2 = 2024948086;
					}
					else
					{
						iVar2 = -1265030920;
					}
					break;
			}
			break;
		
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1230359523;
					break;
				
				case 1:
					iVar2 = 96930969;
					break;
				
				case 2:
					iVar2 = -586898625;
					break;
				
				case 3:
					iVar2 = 36009259;
					break;
				
				default:
					if (func_301())
					{
						iVar2 = 1230359523;
					}
					else
					{
						iVar2 = 96930969;
					}
					break;
			}
			break;
		
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -727455979;
					break;
				
				case 1:
					iVar2 = 2119038574;
					break;
				
				case 2:
					iVar2 = -1180427609;
					break;
				
				case 3:
					iVar2 = -1250098797;
					break;
				
				default:
					if (func_301())
					{
						iVar2 = -727455979;
					}
					else
					{
						iVar2 = 2119038574;
					}
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = 917402668;
					break;
				
				case 1:
					iVar2 = -914712122;
					break;
				
				case 2:
					iVar2 = -598917269;
					break;
				
				case 3:
					iVar2 = -598917269;
					break;
				
				default:
					iVar2 = 917402668;
					break;
			}
			break;
		
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1250098797;
					break;
				
				case 1:
					iVar2 = 2130094044;
					break;
				
				case 2:
					iVar2 = 1861665605;
					break;
				
				case 3:
					iVar2 = -1924405794;
					break;
				
				case 4:
					iVar2 = -1180427609;
					break;
				
				default:
					iVar2 = -1250098797;
					break;
			}
			break;
		
		default:
			iVar2 = -1038436471;
			break;
	}
	return iVar2;
}

void func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_302(&(((*iParam0)[iVar0 /*32*/])->f_1));
		func_302(&(((*iParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_126(var uParam0)
{
	func_303(uParam0, 32);
}

char* func_127(int iParam0)
{
	if (func_304(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			
			case 1:
				return "GREET_NEG";
			
			case 2:
				return "GREET_SPOS";
			
			case 3:
				return "GREET_SNEG";
			
			case 4:
				return "GREET_ACC";
			
			case 5:
				return "GREET_REJ";
			
			case 6:
				return "BEAT_GRT_NEG";
			
			case 7:
				return "INTERACT_GREET";
			
			case 8:
				return "INTERACT_DEFUSE";
			
			case 9:
				return "INTERACT_LET_GO";
			
			case 10:
				return "INTERACT_INSULT";
			
			case 11:
				return "INTERACT_THREATEN";
			
			case 12:
				return "INTERACT_ROB";
			
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			
			case 14:
				return "INTERACT_ROB_ACCEPT";
			
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			
			case 16:
				return "INTERACT_STOP_WITNESS";
			
			case 17:
				return "INTERACT_STOP_VEHICLE";
			
			case 18:
				return "INTERACT_STOP_HORSE";
			
			case 19:
				return "INTERACT_REQUEST_RIDE";
			
			case 20:
				return "INTERACT_STEAL_HORSE";
			
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			
			case 22:
				return "INTERACT_HORSE";
			
			case 23:
				return "INTERACT_CALLOUT";
			
			case 24:
				return "INTERACT_QUESTION";
			
			case 25:
				return "INTERACT_ENCOURAGE";
			
			case 26:
				return "INTERACT_INTERVENE";
			
			case 27:
				return "INTERACT_CONFRONT";
			
			case 28:
				return "RE_INTER_TRUTH";
			
			case 29:
				return "RE_INTER_LIE";
			
			case 30:
				return "INTERACT_QUIT";
			
			case 31:
				return "RE_INTER_DIRECT";
			
			case 32:
				return "INTERACT_SCOLD";
			
			case 33:
				return "INTERACT_PRAISE";
			
			case 34:
				return "INTERACT_ASSIST";
			
			case 35:
				return "INTERACT_MISLEAD";
			
			case 36:
				return "INTERACT_ASK";
			
			case 37:
				return "INTERACT_DEMAND";
			
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_128(int* iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_253(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_305(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_306(iParam0->f_6, iParam0->f_5, 0);
			}
			func_307(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_220(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_129(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_308(iParam0, 4))
		{
			func_251(&(iParam0->f_6), 1, 1);
			func_309(iParam0, 4);
		}
	}
	else if (func_308(iParam0, 4))
	{
		func_310(iParam0, 4);
		func_309(iParam0, 14);
	}
}

void func_130(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_308(iParam0, 13))
	{
		func_309(iParam0, 0);
	}
	else
	{
		func_310(iParam0, 0);
	}
	if (func_253(iParam0->f_6))
	{
		if (bParam2)
		{
			func_251(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_131(var uParam0)
{
	if (!func_311(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_311(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

int func_132()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_133(var uParam0, var uParam1, vector3 vParam2, float fParam5, var uParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_312(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_313(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_314(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_315(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_140(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return 0;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_312(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_313(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (uParam6 || func_316(&(uParam0->f_22)));
					Var2 = { func_312(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_313(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_314(uParam0->f_1, uParam0, Var2, Var2.f_3, bParam7, PED::_0x772A1969F649E902(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_317(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_318(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return 0;
		}
	}
	return 1;
}

void func_134(int iParam0)
{
	char* sVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		sVar0 = "lose_honor_steal_vehicle";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

int func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (((func_319(iParam0, 4096) && func_319(iParam0, 512)) && func_319(iParam0, 1024)) && func_319(iParam0, 2048))
	{
		return -183018591;
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(-594562071, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(970310034, iParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(-1212426201, iParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(860033945, iParam1, iParam2, 0);
	while (func_320(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = 1845102363;
			Jump @185; //curOff = 160
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(860033945, iParam1, iParam2, 0);
		}
	}
	if (!func_321(iVar3))
	{
		iVar3 = -183018591;
	}
	iVar5 = 0;
	if (!func_319(iParam0, 4096))
	{
		iVar5 = iVar0;
	}
	if (!func_319(iParam0, 512))
	{
		if (!func_322(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_319(iParam0, 1024))
	{
		if (!func_322(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_319(iParam0, 2048))
	{
		if (!func_322(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_322(iVar5))
	{
		return -183018591;
	}
	return iVar5;
}

bool func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = func_323(iParam3, 1);
	bVar1 = func_323(iParam3, 2);
	bVar2 = !func_323(iParam3, 4);
	bVar3 = func_323(iParam3, 8);
	bVar4 = !func_323(iParam3, 16);
	bVar5 = func_323(iParam3, 32);
	bVar6 = func_323(iParam3, 64);
	return func_324(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_319(iParam0, 8192) && func_319(iParam0, 16384)) && func_319(iParam0, 131072))
	{
		return 379542007;
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(416676503, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_319(iParam0, 16384))
	{
		iVar3 = iVar1;
	}
	if (!func_319(iParam0, 8192))
	{
		if (!func_322(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_319(iParam0, 131072) && func_321(iVar2))
	{
		if (!func_322(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_322(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

bool func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_325(iParam0);
		return func_326(iParam0, 2084597891, iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_325(iParam0);
		func_326(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_327(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_141(var uParam0)
{
	func_303(uParam0, 256);
}

void func_142(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam3)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 344, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 344, false);
		}
		if (bParam2)
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
			{
				if (PED::IS_PED_HUMAN(iParam0))
				{
					*uParam1 = VOLUME::_0x0EB78C2B156635B1(665633627, ENTITY::GET_ENTITY_COORDS(iParam0, true, false) - Vector(1f, 0f, 0f), 0f, 0f, 0f, 0.5f, 0.5f, 1f);
				}
				else
				{
					*uParam1 = VOLUME::_0x0EB78C2B156635B1(665633627, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 0.5f, 1f, 0.5f);
				}
				PED::_0x7C00CFC48A782DC0(*uParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
		}
		else if (VOLUME::_0x92A78D0BEDB332A3(*uParam1))
		{
			VOLUME::_0x43F867EF5C463A53(*uParam1);
		}
	}
}

int func_143(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_328(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_144(int iParam0, int iParam1)
{
	func_329(iParam0, iParam1);
}

void func_145(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_1), 8);
	}
	else
	{
		func_51(&(uParam0->f_1), 8);
	}
}

void func_146(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_1), 4);
	}
	else
	{
		func_51(&(uParam0->f_1), 4);
	}
}

void func_147(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_268(&(uParam0->f_1), 2);
	}
	else
	{
		func_51(&(uParam0->f_1), 2);
	}
}

void func_148(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(uParam0, 2);
	}
	else
	{
		func_268(uParam0, 2);
	}
}

void func_149(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(uParam0, 65536);
	}
	else
	{
		func_268(uParam0, 65536);
	}
}

void func_150(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		
		default:
			break;
	}
}

void func_151(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_150(uParam0, iParam1, iParam3);
	func_330(uParam0, iParam2, iParam3);
}

int func_152(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	vVar1 = { func_331(vParam0, vParam3, fParam10) };
	vVar4 = { func_332(vParam0, vParam3, fParam10) };
	func_333(vParam6, fParam9, bParam11);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1, vVar4, bParam11, 15);
	return iVar0;
}

void func_153(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_154()
{
	return &Global_1935436 == 2;
}

void func_155(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_156(int iParam0, int iParam1)
{
	float fVar0;
	
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_25(iParam0, 2))
	{
		func_335(iParam0, func_334(iParam1));
	}
	else
	{
		func_337(iParam0, func_336());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT(((Global_17503.f_42[iParam0 /*8*/])->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_338(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_339(iParam0, 0);
	func_340(iParam0);
	func_341(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 4;
	Global_17503.f_6 = iParam0;
	Global_17503.f_10 = 1;
	Global_17503.f_7 = 0;
	Global_17503.f_8 = 0;
	if (!func_25(iParam0, 16))
	{
		func_157(iParam0, 0, 0, 0, 0);
	}
}

void func_157(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
	}
	if (func_342() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_117(iVar1) && !func_25(iVar1, iParam2)) && (!bParam3 || !func_174(iVar1))) && (!bParam4 || !func_343(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_344(iVar0);
			}
		}
		iVar0++;
	}
}

int func_158(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_159(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_275(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_25(uParam0->f_3, 1073741824))
			{
				func_345(2, -1, 0, 0, 0);
			}
			else
			{
				func_345(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_345(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_346(1, uParam0->f_177))
				{
					func_347(16, uParam0->f_177);
					func_348(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_349(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_345(8, -1, 0, 0, 0);
	}
}

int func_160()
{
	if (func_322(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_350())
		{
			return 1;
		}
	}
	return 0;
}

bool func_161(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

float func_162(var uParam0, bool bParam1)
{
	float fVar0;
	
	if (uParam0->f_119 == -1f)
	{
		if (func_25(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_25(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_25(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_25(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_25(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_25(uParam0->f_3, 1))
		{
		}
		else if (func_25(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_163(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	float fVar0;
	bool bVar1;
	
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_351(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (iParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_352(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_353() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_164(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_54(uParam0);
	return 1;
}

bool func_165()
{
	return (Global_1894899 & 1 != 0 && func_177() != -1);
}

int func_166(var uParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_167(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_354(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_356(func_355());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_169(int iParam0, int iParam1)
{
	return (func_158(iParam0) && iParam1) != 0;
}

int func_170(int iParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 & -1 == -1)
	{
		return 1;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (iParam0 & 1 == 1 && func_357(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_358(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_359(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_360(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_361(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_362(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_363(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_171(bool bParam0)
{
	var uVar0;
	var uVar1;
	
	if (func_364(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_173(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_365())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_366(&(Global_1898164->f_1[0 /*5*/]));
		if (func_367(iVar0) && func_368(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_369(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

int func_174(int iParam0)
{
	if (!func_117(iParam0))
	{
		return 0;
	}
	if (func_370(64) && func_371(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_175(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_372(iVar0) || func_373(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_176()
{
	return Global_1894899 & 4 != 0;
}

int func_177()
{
	return Global_1894899->f_2;
}

int func_178(int iParam0)
{
	if (!func_374(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		
		case 76:
			return 1;
		
		case 15:
			return 3;
		
		case 128:
			return 2;
		
		default:
			break;
	}
	return -1;
}

int func_179(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_180(vector3 vParam0, int iParam3)
{
	if (!func_179(iParam3))
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::_0xF256A75210C5C0EB(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_181(vector3 vParam0)
{
	float fVar0;
	
	if (func_107(vParam0))
	{
		return false;
	}
	fVar0 = func_87(func_165(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_182(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_0x1A51BFE60708E482(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_235(uParam0);
						if (bParam3)
						{
							return 1;
						}
					}
					if (!bParam3)
					{
						return 1;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_235(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_234(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_375(uParam0, fParam2))
		{
			return 1;
		}
		if (func_234(uParam0))
		{
			func_376(uParam0);
		}
	}
	return 0;
}

bool func_183(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_184(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (func_107(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_285(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_185(int iParam0)
{
	if (!func_117(iParam0))
	{
		return 0f;
	}
	if (!func_377(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_186()
{
	return "unnamed";
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		
		case 75:
			return "BANDITO_BREAKOUT";
		
		case 8:
			return "BURNING_BODIES";
		
		case 1:
			return "ANIMAL_MAULING";
		
		case 2:
			return "APPROACH";
		
		case 3:
			return "ARMS_DEAL";
		
		case 76:
			return "BANDITO_EXECUTION";
		
		case 4:
			return "BEAR_TRAP";
		
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		
		case 5:
			return "BOAT_ATTACK";
		
		case 6:
			return "BOOBY_TRAP";
		
		case 7:
			return "BOUNTY TRANSPORT";
		
		case 78:
			return "BRONTE_PATROL";
		
		case 9:
			return "CAMPFIRE_AMBUSH";
		
		case 10:
			return "CHAIN_GANG";
		
		case 11:
			return "CHECKPOINT";
		
		case 12:
			return "COACH_ROBBERY";
		
		case 79:
			return "CONSEQUENCE";
		
		case 13:
			return "CORPSE_CART";
		
		case 14:
			return "CRASHED_WAGON";
		
		case 80:
			return "DARK_ALLEY_AMBUSH";
		
		case 81:
			return "DARK_ALLEY_BUM";
		
		case 82:
			return "DARK_ALLEY_STAB";
		
		case 83:
			return "DEAD_BODIES";
		
		case 84:
			return "DEAD_JOHN";
		
		case 15:
			return "DEL_LOBO_POSSE";
		
		case 85:
			return "DISABLED_BEGGAR";
		
		case 86:
			return "DOMESTIC_DISPUTE";
		
		case 87:
			return "DROWN_MURDER";
		
		case 16:
			return "DRUNK_CAMP";
		
		case 88:
			return "DRUNK_DUELER";
		
		case 89:
			return "DUEL_BOASTER";
		
		case 90:
			return "DUEL_WINNER";
		
		case 17:
			return "ESCORT";
		
		case 18:
			return "EXECUTIONS";
		
		case 91:
			return "FLEEING_FAMILY";
		
		case 19:
			return "FLEEING_TRESPASSER";
		
		case 92:
			return "FOOT_ROBBERY";
		
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		
		case 21:
			return "FROZEN_TO_DEATH";
		
		case 22:
			return "FUSSAR_CHASE";
		
		case 23:
			return "GANG_CAMP_REMINDER";
		
		case 94:
			return "GANG_PED_ENCOUNTER";
		
		case 24:
			return "GOLD_PANNER";
		
		case 119:
			return "HERBALIST_CAMP";
		
		case 27:
			return "HORSE_RACE";
		
		case 28:
			return "HOSTAGE_RESCUE";
		
		case 29:
			return "INBRED_KIDNAP";
		
		case 30:
			return "INJURED_RIDER";
		
		case 95:
			return "INTIMIDATION TACTICS";
		
		case 31:
			return "KIDNAP_VICTIM";
		
		case 32:
			return "RALLY_DISPUTE";
		
		case 33:
			return "RALLY";
		
		case 34:
			return "RALLY_SETUP";
		
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		
		case 36:
			return "LOCKED_SAFE";
		
		case 37:
			return "LONE_PRISONER";
		
		case 97:
			return "LOST_DOG";
		
		case 98:
			return "LOST_DRUNK";
		
		case 38:
			return "LOST_FRIEND";
		
		case 39:
			return "LOST_MAN";
		
		case 40:
			return "MOONSHINE_CAMP";
		
		case 41:
			return "MURDER_CAMPFIRE";
		
		case 42:
			return "NAKED_SWIMMER";
		
		case 93:
			return "FUNDRAISER";
		
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		
		case 100:
			return "ON_THE_RUN";
		
		case 43:
			return "OUTLAW_LOOTER";
		
		case 44:
			return "OUTLAW_TRANSPORT";
		
		case 101:
			return "PARLOR_AMBUSH";
		
		case 102:
			return "PEEPING_TOM";
		
		case 103:
			return "PICKPOCKET";
		
		case 45:
			return "SNAKE_BITE";
		
		case 104:
			return "PISS_POT";
		
		case 46:
			return "PLAYER_CAMP_ATTACK";
		
		case 47:
			return "PLAYER_CAMP_STRANGER";
		
		case 48:
			return "POISONED";
		
		case 105:
			return "POLICE_CHASE";
		
		case 49:
			return "POSSE_BREAKOUT";
		
		case 50:
			return "PRISON_WAGON";
		
		case 106:
			return "PUBLIC_HANGING";
		
		case 107:
			return "RAT_INFESTATION";
		
		case 51:
			return "RIFLE_PRACTICE";
		
		case 108:
			return "ROWDY_DRUNKS";
		
		case 53:
			return "SAVAGE_AFTERMATH";
		
		case 54:
			return "SAVAGE_FIGHT";
		
		case 56:
			return "SAVAGE_WAGON";
		
		case 55:
			return "SAVAGE_WARNING";
		
		case 57:
			return "SHARP_SHOOTER";
		
		case 109:
			return "SHOW_OFF";
		
		case 58:
			return "SKIPPING_STONES";
		
		case 110:
			return "SLUM_AMBUSH";
		
		case 59:
			return "SPOOKED_HORSE";
		
		case 60:
			return "STALKING_HUNTER";
		
		case 61:
			return "STALKING_SHADOWS";
		
		case 62:
			return "STRANDED_RIDER";
		
		case 111:
			return "STREET_FIGHT";
		
		case 112:
			return "TAUNTING";
		
		case 67:
			return "TORTURING_CAPTIVE";
		
		case 68:
			return "TORCH_PROCESSION";
		
		case 113:
			return "TOWN_BURIAL";
		
		case 114:
			return "TOWN_CONFRONTATION";
		
		case 115:
			return "TOWN_ROBBERY";
		
		case 117:
			return "TOWN_TERROR";
		
		case 116:
			return "TOWN_WIDOW";
		
		case 63:
			return "TRAFFIC_ATTACK";
		
		case 64:
			return "TRAIN_HOLDUP";
		
		case 65:
			return "TRAPPED_WOMAN";
		
		case 66:
			return "TREASURE_HUNTER";
		
		case 69:
			return "VOICE";
		
		case 70:
			return "WAGON_THREAT";
		
		case 71:
			return "WASHED_ASHORE";
		
		case 118:
			return "WEALTHY_COUPLE";
		
		case 72:
			return "WILDERNESS_HANGING";
		
		case 73:
			return "WILD_MAN";
		
		case 74:
			return "WILD_MAN_CAVE";
		
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_188(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_276(vVar0, vVar3.x, uParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_189()
{
	if (!PED::_0x3AA24CCC0D451379(&(uLocal_746[0])) && !PED::_0x3AA24CCC0D451379(&(uLocal_746[1])))
	{
		return 0;
	}
	if (PED::_0x3AA24CCC0D451379(&(uLocal_746[0])))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_746[0]), Global_35, 1, 1))
		{
			iLocal_817 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[0]));
		}
		if (iLocal_817 < iLocal_816)
		{
			switch (iLocal_14)
			{
				case 0:
					if (iLocal_854 == 0)
					{
						func_378(0);
						if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_39[6]), 0.8f, 0))
						{
							iLocal_854 = 1;
							iLocal_816 = iLocal_817;
						}
					}
					break;
				
				case 1:
					if (iLocal_854 == 0)
					{
						func_378(0);
						if (func_200(&(uLocal_746[3]), Global_35, &(sLocal_39[12]), 0.8f, 0))
						{
							iLocal_854 = 1;
							iLocal_816 = iLocal_817;
						}
					}
					break;
			}
			return 1;
		}
	}
	if (PED::_0x3AA24CCC0D451379(&(uLocal_746[1])))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_746[1]), Global_35, 1, 1))
		{
			iLocal_819 = ENTITY::GET_ENTITY_HEALTH(&(uLocal_746[1]));
		}
		if (iLocal_819 < iLocal_818)
		{
			switch (iLocal_14)
			{
				case 0:
					if (iLocal_854 == 0)
					{
						func_378(0);
						if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_39[6]), 0.8f, 0))
						{
							iLocal_854 = 1;
							iLocal_818 = iLocal_819;
						}
					}
					break;
				
				case 1:
					if (iLocal_854 == 0)
					{
						func_378(0);
						if (func_200(&(uLocal_746[3]), Global_35, &(sLocal_39[12]), 0.8f, 0))
						{
							iLocal_854 = 1;
							iLocal_818 = iLocal_819;
						}
					}
					break;
			}
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_379(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_380(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_381(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_382(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (func_383(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_384(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_167(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_381(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_385(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_386(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_381(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_387(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_381(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_388(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (func_388(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_381(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_389(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_390(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_391(uParam2, 4000))
				{
					if ((func_392(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_393(uParam2, iParam0)) && func_394(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_381(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_392(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_393(uParam2, iParam0)) && func_394(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_395(iParam0, Global_1935630->f_41))
							{
								func_396();
								*iParam3 = 2;
								func_381(iParam0, uParam2, *iParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_395(iParam0, Global_1935630->f_41))
						{
							func_396();
							*iParam3 = 2;
							func_381(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_397(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_398() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_396();
						*iParam3 = 2;
						func_381(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_399())
					{
						if (func_395(iParam0, Global_1935630->f_42))
						{
							func_396();
							*iParam3 = 2;
							func_381(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_400(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_381(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_401(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_402(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_381(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_403(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_404(uParam2, 4000))
				{
					if (func_405(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_381(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_406(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_381(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_407(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_381(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_191()
{
	if (PED::_0x9682F850056C9ADE(&(uLocal_746[2])) || (iLocal_14 == 1 && PED::_0x9682F850056C9ADE(&(uLocal_746[3]))))
	{
		return 1;
	}
	return 0;
}

void func_192()
{
	func_130(Local_307[0 /*17*/], 1, 0);
	func_130(Local_307[1 /*17*/], 1, 0);
	func_130(Local_307[2 /*17*/], 1, 0);
	switch (iLocal_799)
	{
		case 0:
			iLocal_858 = 1;
			if (MAP::DOES_BLIP_EXIST(&(iLocal_753[2])))
			{
				MAP::REMOVE_BLIP(iLocal_753[2]);
			}
			if (MAP::DOES_BLIP_EXIST(&(iLocal_753[3])))
			{
				MAP::REMOVE_BLIP(iLocal_753[3]);
			}
			PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2048, false);
			PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2048, false);
			func_378(0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
			iLocal_799 = 1;
			break;
		
		case 1:
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_899);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_899);
			if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_746[3]), false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_899);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_746[3]), iLocal_899);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_899);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_898);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_898);
			if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_746[2]), false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_898);
			TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_746[2]), iLocal_898, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_898);
			if (bLocal_836)
			{
				func_195(4, 0, 0, "Cruel Killing", 0, 0, 1065353216, 0);
			}
			func_18(Local_264[0 /*21*/], &Local_307);
			func_18(Local_264[1 /*21*/], &Local_307);
			func_129(Local_307[0 /*17*/], 1);
			func_129(Local_307[1 /*17*/], 1);
			func_129(Local_307[2 /*17*/], 1);
			iLocal_799 = 2;
			break;
		
		case 2:
			if (((func_408() || func_246()) || func_237()) || func_60())
			{
				if (!func_234(&uLocal_883))
				{
					func_235(&uLocal_883);
					PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2048, false);
				}
			}
			if (func_242(&uLocal_883) >= 1.2f)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[2]), 2048, false);
			}
			if (ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2])))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 2048, false);
				PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_746[3]), 65536, true);
			}
			if (iLocal_14 == 0)
			{
				func_409();
			}
			else
			{
				func_410();
			}
			break;
	}
}

int func_193(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		
		case 3:
			iVar0 = 192;
			break;
		
		case 2:
			iVar0 = 208;
			break;
		
		case 4:
			iVar0 = 212;
			break;
		
		case 5:
			iVar0 = 77;
			break;
		
		case 7:
			iVar0 = 76;
			break;
		
		case 6:
			iVar0 = 96;
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_194(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam9;
	func_411(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_412(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_413(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_414(558))
				{
					func_415(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

void func_195(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_267() != -1)
	{
		return;
	}
	if ((Global_36615 && func_327(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_416(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_417(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_418(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_417(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_196()
{
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[0])))
	{
		func_239(&(uLocal_746[0]), Global_35, &uLocal_85, -1, 60);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[1])))
	{
		func_239(&(uLocal_746[1]), Global_35, &uLocal_85, -1, 60);
	}
}

int func_197(int iParam0, int iParam1)
{
	if (func_83(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

bool func_198(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_419(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_199()
{
	PED::_0xE737D5F14304A2EC(&(uLocal_746[0]), PLAYER::PLAYER_ID(), 120000);
	PED::_0xE737D5F14304A2EC(&(uLocal_746[1]), PLAYER::PLAYER_ID(), 120000);
	PED::_0xE737D5F14304A2EC(&(uLocal_746[2]), PLAYER::PLAYER_ID(), 120000);
	if (func_83(&(uLocal_746[3]), 0, 1))
	{
		PED::_0xE737D5F14304A2EC(&(uLocal_746[3]), PLAYER::PLAYER_ID(), 120000);
	}
}

int func_200(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!func_234(&uLocal_871))
	{
		func_235(&uLocal_871);
	}
	else if (func_242(&uLocal_871) > fParam3)
	{
		func_198(iParam0, iParam1, sParam2, "", -1082130432, iParam4, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_376(&uLocal_871);
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (VEHICLE::_0xEA44E97849E9F3DD(*iParam0))
		{
			if (VEHICLE::_0xA19447D83294E29F(*iParam0, &iVar0, &iVar1))
			{
				if (iVar0 == iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_202(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_420(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_190(uParam0[*uParam3], 0, uParam1, iParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

float func_203(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_61(Global_35, iParam0, bParam1, iParam2);
}

void func_204(var uParam0, int iParam1)
{
	if (uParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_398();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_421(uParam0, 0);
	*iParam1 = 0;
	uParam0->f_16 = 0;
}

float func_205(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_206()
{
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2])))
	{
		if (bLocal_766)
		{
			func_239(&(uLocal_746[2]), &(uLocal_746[1]), &uLocal_85, -1, 10);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[3])))
	{
		func_239(&(uLocal_746[3]), &(uLocal_746[1]), &uLocal_85, -1, 10);
	}
}

void func_207(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_182 || iParam2 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			uParam0->f_183 = MAP::_0x23F74C2FDA6E7C61(1260140857, iParam1);
			uParam0->f_182 = 1;
		}
	}
}

int func_208(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, int iParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	bVar1 = false;
	fVar2 = func_162(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_160())
	{
		bVar1 = true;
		fVar3 = func_87(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_163(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_163(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_164(&(uParam0->f_121), iParam4, fParam1))
		{
			func_54(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_91(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) && !(iParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_53(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_54(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_91(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_209()
{
	float fVar0;
	float fVar1;
	
	fVar1 = 3f;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 <= 1f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 1.5f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 2f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 <= 1f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 1.5f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	if (iLocal_827 == 1)
	{
		if (!func_234(&uLocal_877) && ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_746[1]), true, false), 13f, 20f, 3f, false, true, 0))
		{
			func_235(&uLocal_877);
			bLocal_831 = true;
		}
		if (func_242(&uLocal_877) >= fVar1)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_746[1]), true, false), 13f, 20f, 3f, false, true, 0) && bLocal_831 == 1)
			{
				iLocal_830 = 1;
			}
			else
			{
				bLocal_831 = false;
				iLocal_830 = 0;
				func_376(&uLocal_877);
			}
		}
	}
	if (func_422() && !ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_746[1]), true, false), 13f, 23f, 3f, false, true, 0))
	{
		bLocal_831 = false;
		iLocal_830 = 0;
		func_376(&uLocal_877);
	}
}

int func_210()
{
	if (!PED::IS_PED_INJURED(&(uLocal_746[0])) || (!PED::IS_PED_INJURED(&(uLocal_746[1])) && !func_62()))
	{
		if ((func_61(&(uLocal_746[0]), PLAYER::PLAYER_PED_ID(), 1, 1) <= 25f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(&(uLocal_746[0]), PLAYER::PLAYER_PED_ID(), 17)) || (func_61(&(uLocal_746[1]), PLAYER::PLAYER_PED_ID(), 1, 1) <= 25f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(&(uLocal_746[1]), PLAYER::PLAYER_PED_ID(), 17)))
		{
			iLocal_827 = 1;
			return 1;
		}
	}
	return 0;
}

void func_211()
{
	if (func_423(Global_35, &(uLocal_746[4]), 0) || func_423(Global_35, &(uLocal_746[5]), 0))
	{
		func_65(5);
	}
}

void func_212()
{
	func_241();
	func_196();
	if (iLocal_853 == 1)
	{
		return;
	}
	switch (iLocal_802)
	{
		case 0:
			func_378(0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[0]), 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[1]), 0);
			if (func_424(-4f, 1, 0, 0))
			{
				func_198(&(uLocal_746[0]), Global_35, &(sLocal_24[0]), "", 50f, 0, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(&(uLocal_746[1]), Global_35, -1, 0, 4);
				func_199();
				iLocal_795 = 1;
				func_129(Local_139[0 /*17*/], 0);
				func_130(Local_139[0 /*17*/], 1, 0);
				func_130(Local_139[1 /*17*/], 1, 0);
				func_129(Local_212[0 /*17*/], 0);
				func_130(Local_212[0 /*17*/], 1, 0);
				func_130(Local_212[1 /*17*/], 1, 0);
				(Local_139[0 /*17*/])->f_13 = &sLocal_62[1];
				func_220(Local_139[0 /*17*/], "INTERACT_DEFUSE");
				func_220(Local_212[0 /*17*/], "INTERACT_DEFUSE");
				func_235(&uLocal_886);
				iLocal_802++;
			}
			break;
		
		case 1:
			if (!func_197(&(uLocal_746[0]), 0) && func_236(&uLocal_886) > 2f)
			{
				func_198(&(uLocal_746[2]), Global_35, "RE_WT_BGV_V1_WARN_E", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_802++;
			}
			break;
		
		case 2:
			if ((((func_424(-4f, 1, &(uLocal_746[0]), 1) && func_424(-4f, 1, &(uLocal_746[1]), 1)) && func_424(-4f, 1, &(uLocal_746[2]), 1)) && !func_422()) || iLocal_848 == 1)
			{
				if (!func_197(Global_35, 0))
				{
					func_198(&(uLocal_746[1]), &(uLocal_746[0]), &(sLocal_24[3]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_130(Local_139[0 /*17*/], 0, 0);
					func_130(Local_139[1 /*17*/], 0, 0);
					func_130(Local_212[0 /*17*/], 0, 0);
					func_130(Local_212[1 /*17*/], 0, 0);
					func_130(Local_307[0 /*17*/], 0, 0);
					func_130(Local_307[1 /*17*/], 0, 0);
					iLocal_851 = 1;
					iLocal_849 = 1;
					iLocal_802++;
				}
			}
			break;
		
		case 3:
			if (func_424(-4f, 1, &(uLocal_746[1]), 1))
			{
				iLocal_802++;
				func_65(5);
			}
			break;
	}
}

void func_213()
{
	if (iLocal_847 == 0)
	{
		iLocal_847 = 1;
		func_425(&(uLocal_746[2]), Global_35);
		func_426();
		iLocal_846 = 1;
		func_235(&uLocal_880);
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(Local_110, sLocal_864) && iLocal_829 == 0)
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, sLocal_864, true);
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, sLocal_863) && func_242(&uLocal_880) >= 1.5f)
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, sLocal_863, true);
	}
}

void func_214()
{
	func_241();
	func_196();
	if (iLocal_853 == 1)
	{
		return;
	}
	switch (iLocal_803)
	{
		case 0:
			func_378(0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[0]), 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[1]), 0);
			if (func_424(-4f, 1, 0, 0))
			{
				func_198(&(uLocal_746[0]), Global_35, &(sLocal_24[0]), "", 50f, 0, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
				TASK::TASK_AIM_AT_ENTITY(&(uLocal_746[1]), Global_35, -1, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(&(uLocal_746[1]), Global_35, -1, 0, 4);
				func_199();
				iLocal_795 = 1;
				func_129(Local_139[0 /*17*/], 0);
				func_130(Local_139[0 /*17*/], 1, 0);
				func_130(Local_139[1 /*17*/], 1, 0);
				func_129(Local_212[0 /*17*/], 0);
				func_130(Local_212[0 /*17*/], 1, 0);
				func_130(Local_212[1 /*17*/], 1, 0);
				(Local_139[0 /*17*/])->f_13 = &sLocal_62[1];
				func_220(Local_139[0 /*17*/], "INTERACT_DEFUSE");
				func_220(Local_212[0 /*17*/], "INTERACT_DEFUSE");
				func_235(&uLocal_886);
				iLocal_803++;
			}
			break;
		
		case 1:
			if (!func_197(&(uLocal_746[0]), 0) && func_236(&uLocal_886) > 2f)
			{
				func_198(&(uLocal_746[3]), Global_35, &(sLocal_24[1]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_803++;
			}
			break;
		
		case 2:
			if ((((func_424(-4f, 1, &(uLocal_746[0]), 1) && func_424(-4f, 1, &(uLocal_746[1]), 1)) && func_424(-4f, 1, &(uLocal_746[3]), 1)) && !func_422()) || iLocal_848 == 1)
			{
				if (!func_197(Global_35, 0))
				{
					func_198(&(uLocal_746[1]), &(uLocal_746[0]), &(sLocal_24[3]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_130(Local_139[0 /*17*/], 0, 0);
					func_130(Local_139[1 /*17*/], 0, 0);
					func_130(Local_212[0 /*17*/], 0, 0);
					func_130(Local_212[1 /*17*/], 0, 0);
					func_130(Local_307[0 /*17*/], 0, 0);
					func_130(Local_307[1 /*17*/], 0, 0);
					iLocal_851 = 1;
					iLocal_849 = 1;
					iLocal_803++;
					func_65(5);
				}
			}
			break;
		
		case 3:
			if (func_424(-4f, 1, &(uLocal_746[1]), 1))
			{
				iLocal_802++;
				func_65(5);
			}
			break;
	}
}

void func_215()
{
	if (iLocal_824 == 0)
	{
		if (iLocal_847 == 0)
		{
			iLocal_847 = 1;
			func_425(&(uLocal_746[2]), Global_35);
			func_426();
			iLocal_846 = 1;
			func_235(&uLocal_880);
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_110, sLocal_864))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, sLocal_864, true);
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, sLocal_863) && func_242(&uLocal_880) >= 1.5f)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, sLocal_863, true);
		}
	}
}

void func_216()
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	
	switch (iLocal_794)
	{
		case 0:
			fVar0 = func_427(&(uLocal_746[1]), Local_110.f_2, "Robber02", "pbl_Action_P3", 0);
			vVar1 = { func_428(&(uLocal_746[1]), Local_110.f_2, "Robber02", "pbl_Action_P3", 0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 0.25f, false, fVar0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, &(uLocal_746[2]), 2000, 0, 1);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, &(uLocal_746[2]), 1000, 1, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_746[1]), iVar4);
			func_130(Local_139[0 /*17*/], 0, 0);
			func_130(Local_139[1 /*17*/], 1, 0);
			func_220(Local_139[0 /*17*/], "RE_INTER_POS");
			func_220(Local_139[1 /*17*/], "RE_INTER_ANTAGONIZE");
			func_130(Local_212[0 /*17*/], 0, 0);
			func_130(Local_212[1 /*17*/], 1, 0);
			func_220(Local_212[0 /*17*/], "RE_INTER_POS");
			func_220(Local_212[1 /*17*/], "RE_INTER_ANTAGONIZE");
			iLocal_794 = 1;
			break;
		
		case 1:
			if (TASK::GET_SEQUENCE_PROGRESS(&(uLocal_746[1])) >= 2)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_2, "Robber02", &(uLocal_746[1]), 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Action_P3", true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Action_P3", true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Action_P3", false);
				iLocal_835 = 1;
				iLocal_794 = 2;
			}
			break;
		
		case 2:
			func_65(2);
			break;
	}
}

void func_217()
{
	func_206();
	switch (iLocal_800)
	{
		case 0:
			if (fLocal_859 >= 0.02f)
			{
				func_429(1515458263, &(uLocal_746[2]), 1);
				iLocal_800++;
			}
			break;
		
		case 1:
			if (fLocal_859 >= 0.12f)
			{
				func_429(1515458263, &(uLocal_746[1]), 1);
				iLocal_800++;
			}
			break;
		
		case 2:
			if (fLocal_859 >= 0.23f)
			{
				iLocal_800++;
			}
			break;
		
		case 3:
			if (fLocal_859 >= 0.31f)
			{
				iLocal_800++;
			}
			break;
		
		case 4:
			if (fLocal_859 >= 0.39f)
			{
				iLocal_800++;
			}
			break;
		
		case 5:
			if (fLocal_859 >= 0.47f)
			{
				iLocal_800++;
				iLocal_828 = 1;
			}
			break;
	}
}

void func_218()
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	
	switch (iLocal_794)
	{
		case 0:
			fVar0 = func_427(&(uLocal_746[1]), Local_110.f_2, "Robber02", "pbl_Action_P3", 0);
			vVar1 = { func_428(&(uLocal_746[1]), Local_110.f_2, "Robber02", "pbl_Action_P3", 0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 0.25f, false, fVar0);
			TASK::TASK_STAND_STILL(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_746[1]), iVar4);
			func_130(Local_139[0 /*17*/], 0, 0);
			func_130(Local_139[1 /*17*/], 1, 0);
			func_220(Local_139[0 /*17*/], "RE_INTER_POS");
			if (!bLocal_831)
			{
				func_220(Local_139[1 /*17*/], "INTERACT_INTERVENE");
			}
			else
			{
				func_220(Local_139[1 /*17*/], "RE_INTER_ANTAGONIZE");
			}
			func_130(Local_212[0 /*17*/], 0, 0);
			func_130(Local_212[1 /*17*/], 1, 0);
			func_220(Local_212[0 /*17*/], "RE_INTER_POS");
			if (!bLocal_831)
			{
				func_220(Local_212[1 /*17*/], "INTERACT_INTERVENE");
			}
			else
			{
				func_220(Local_212[1 /*17*/], "RE_INTER_ANTAGONIZE");
			}
			iLocal_794 = 1;
			break;
		
		case 1:
			if (TASK::IS_PED_STILL(&(uLocal_746[1])) && TASK::GET_SEQUENCE_PROGRESS(&(uLocal_746[1])) >= 1)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Action_P3", true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Action_P3", true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_2, "Robber02", &(uLocal_746[1]), 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Action_P3", false);
				iLocal_794 = 2;
				iLocal_835 = 1;
			}
			break;
		
		case 2:
			func_65(3);
			break;
	}
}

void func_219()
{
	func_206();
	switch (iLocal_801)
	{
		case 0:
			if (fLocal_859 >= 0.05f)
			{
				func_429(1515458263, &(uLocal_746[3]), 1);
				iLocal_801++;
			}
			break;
		
		case 1:
			if (fLocal_859 >= 0.15f)
			{
				func_429(1515458263, &(uLocal_746[1]), 1);
				iLocal_801++;
			}
			break;
		
		case 2:
			if (fLocal_859 >= 0.2f)
			{
				iLocal_801++;
			}
			break;
		
		case 3:
			if (fLocal_859 >= 0.36f)
			{
				iLocal_801++;
			}
			break;
		
		case 4:
			if (fLocal_859 >= 0.42f)
			{
				iLocal_801++;
			}
			break;
		
		case 5:
			if (fLocal_859 >= 0.54f)
			{
				iLocal_801++;
				iLocal_828 = 1;
			}
			break;
	}
}

void func_220(int* iParam0, char* sParam1)
{
	if (func_253(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_306(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_310(iParam0, 1);
}

void func_221()
{
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_812)
			{
				case 0:
					func_378(0);
					if (func_83(&(uLocal_746[2]), 0, 1))
					{
						func_198(&(uLocal_746[2]), Global_35, &(sLocal_24[4]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_425(&(uLocal_746[2]), Global_35);
					}
					func_426();
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_110, sLocal_864))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, sLocal_864, true);
					}
					TASK::TASK_AIM_AT_ENTITY(&(uLocal_746[1]), Global_35, -1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(&(uLocal_746[1]), Global_35, -1, 0, 3);
					iLocal_795 = 4;
					iLocal_796 = 0;
					iLocal_812++;
					break;
				
				case 1:
					if (iLocal_846 == 1)
					{
						if (func_424(-5f, 1, 0, 0))
						{
							func_198(&(uLocal_746[1]), Global_35, &(sLocal_24[5]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_812 = 4;
						}
					}
					else
					{
						iLocal_812++;
					}
					break;
				
				case 2:
					if (func_424(-5f, 1, 0, 0))
					{
						func_198(&(uLocal_746[1]), Global_35, &(sLocal_24[6]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_812++;
					}
					break;
				
				case 3:
					if (func_424(-5f, 1, 0, 0))
					{
						func_198(&(uLocal_746[1]), Global_35, &(sLocal_24[7]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_812++;
					}
					break;
				
				case 4:
					if (func_200(&(uLocal_746[2]), Global_35, "", 1f, 0))
					{
						iLocal_851 = 1;
						func_65(5);
					}
					break;
			}
			break;
		
		case 1:
			switch (iLocal_812)
			{
				case 0:
					func_378(0);
					if (func_83(&(uLocal_746[3]), 0, 1))
					{
						func_198(&(uLocal_746[3]), Global_35, &(sLocal_24[4]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_795 = 4;
					iLocal_796 = 0;
					func_425(&(uLocal_746[2]), Global_35);
					func_426();
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_110, sLocal_864))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, sLocal_864, true);
					}
					TASK::TASK_AIM_AT_ENTITY(&(uLocal_746[1]), Global_35, -1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(&(uLocal_746[1]), Global_35, -1, 0, 3);
					iLocal_812++;
					break;
				
				case 1:
					if (iLocal_846 == 1)
					{
						if (func_424(-5f, 1, 0, 0))
						{
							func_198(&(uLocal_746[1]), Global_35, &(sLocal_24[5]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_812 = 4;
						}
					}
					else
					{
						iLocal_812++;
					}
					break;
				
				case 2:
					if (func_424(-5f, 1, 0, 0))
					{
						func_198(&(uLocal_746[1]), Global_35, &(sLocal_24[6]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_812++;
					}
					break;
				
				case 3:
					if (func_424(-5f, 1, 0, 0))
					{
						func_198(&(uLocal_746[1]), Global_35, &(sLocal_24[7]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_812++;
					}
					break;
				
				case 4:
					if (func_200(&(uLocal_746[2]), Global_35, "", 1f, 0))
					{
						iLocal_851 = 1;
						func_65(5);
					}
					break;
			}
			break;
	}
}

int func_222()
{
	if ((func_61(&(uLocal_746[0]), PLAYER::PLAYER_PED_ID(), 1, 1) <= 10f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(&(uLocal_746[0]), PLAYER::PLAYER_PED_ID(), 17)) || (func_61(&(uLocal_746[1]), PLAYER::PLAYER_PED_ID(), 1, 1) <= 10f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(&(uLocal_746[1]), PLAYER::PLAYER_PED_ID(), 17)))
	{
		if (iLocal_825 == 0)
		{
			func_378(0);
			func_198(&(uLocal_746[0]), Global_35, &(sLocal_24[4]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_825 = 1;
			return 1;
		}
	}
	if (iLocal_825 == 1)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	func_206();
	switch (iLocal_808)
	{
		case 0:
			if (fLocal_859 >= 0.61f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		
		case 1:
			if (fLocal_859 >= 0.75f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		
		case 2:
			if (fLocal_859 >= 0.87f)
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(&(uLocal_746[2]), iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
				iLocal_824 = 1;
				iLocal_808++;
				iLocal_813++;
			}
			break;
		
		case 3:
			if (fLocal_859 >= 0.5f)
			{
				iLocal_833 = 1;
				iLocal_808++;
				iLocal_813++;
			}
			break;
		
		case 4:
			if (fLocal_860 >= 0.82f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		
		case 5:
			if (fLocal_860 >= 0.85f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		
		case 6:
			if (fLocal_860 >= 0.95f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		
		case 7:
			iLocal_808++;
			return 1;
	}
	return 0;
}

int func_224()
{
	func_206();
	switch (iLocal_813)
	{
		case 0:
			if (fLocal_859 >= 0.1f)
			{
				iLocal_813++;
			}
			break;
		
		case 1:
			if (fLocal_859 >= 0.4f)
			{
				iLocal_813++;
			}
			break;
		
		case 2:
			if (fLocal_859 >= 0.6f)
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(&(uLocal_746[2]), iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
				iLocal_824 = 1;
				iLocal_813++;
			}
			break;
		
		case 3:
			if (fLocal_859 >= 0.76f)
			{
				iLocal_833 = 1;
				iLocal_813++;
			}
			break;
		
		case 4:
			if (fLocal_860 >= 0.66f)
			{
				iLocal_813++;
			}
			break;
		
		case 5:
			if (fLocal_860 >= 0.76f)
			{
				iLocal_813++;
			}
			break;
		
		case 6:
			if (fLocal_860 >= 0.9f)
			{
				iLocal_813++;
			}
			break;
		
		case 7:
			iLocal_813++;
			return 1;
	}
	return 0;
}

void func_225()
{
	var uVar0[2];
	int iVar3;
	
	if (iLocal_851 == 0)
	{
		uVar0[0] = &uLocal_746[0];
		uVar0[1] = &uLocal_746[1];
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uVar0[iVar3])))
			{
				func_190(&(uVar0[iVar3]), 0, &(Local_359.f_5), &iLocal_906, 0, 0);
				if (PED::_0x3AA24CCC0D451379(&(uVar0[iVar3])) || PED::_0x9682F850056C9ADE(&(uVar0[iVar3])))
				{
					if (iLocal_837 == 0)
					{
						iLocal_837 = 1;
						iLocal_804 = 1;
					}
				}
				if (iLocal_906 == 8)
				{
					if (iLocal_838 == 0)
					{
						iLocal_838 = 1;
						iLocal_804 = 3;
					}
				}
				if ((((((iLocal_906 == 4 || iLocal_906 == 0) || iLocal_906 == 8192) || iLocal_906 == 16) || iLocal_906 == 256) || iLocal_906 == 1) || iLocal_906 == 2)
				{
					if (iLocal_839 == 0)
					{
						iLocal_839 = 1;
						iLocal_804 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(&(uVar0[iVar3]), 500) || PED::_0xD0B7AEB56229D317(Global_35) == &uVar0[iVar3])
				{
					if (iLocal_840 == 0)
					{
						iLocal_840 = 1;
						iLocal_804 = 2;
					}
				}
				switch (iLocal_14)
				{
					case 0:
						if (ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2])))
						{
							iLocal_804 = 0;
						}
						break;
					
					case 1:
						if (iLocal_824 == 1)
						{
							iLocal_804 = 0;
						}
						break;
				}
				switch (iLocal_804)
				{
					case 0:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[2]), 0);
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_746[3]), 0);
						if (func_200(&(uVar0[iVar3]), Global_35, &(sLocal_53[0]), 0.8f, 0))
						{
							iLocal_804 = -1;
							iLocal_851 = 1;
						}
						break;
					
					case 1:
						if (func_200(&(uVar0[iVar3]), Global_35, &(sLocal_53[1]), 0.8f, 0))
						{
							iLocal_804 = -1;
							iLocal_851 = 1;
						}
						break;
					
					case 2:
						if (func_200(&(uVar0[iVar3]), Global_35, &(sLocal_53[2]), 0.8f, 0))
						{
							iLocal_804 = -1;
							iLocal_851 = 1;
						}
						break;
					
					case 3:
						if (func_200(&(uVar0[iVar3]), Global_35, &(sLocal_53[3]), 0.8f, 0))
						{
							iLocal_804 = -1;
							iLocal_851 = 1;
						}
						break;
				}
			}
			iVar3++;
		}
	}
}

void func_226()
{
	func_196();
	if (ENTITY::IS_ENTITY_AT_COORD(&(uLocal_746[0]), vLocal_21 + Vector(1f, -1f, 0f), 1f, 1f, 1f, false, true, 0) || PED::IS_PED_ON_VEHICLE(&(uLocal_746[0]), false))
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_746[0]), 0);
	}
	else
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_746[0]), 2);
	}
	if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[0]), true))
	{
		if ((!MAP::DOES_BLIP_EXIST(&(iLocal_753[0])) && func_228()) && func_430())
		{
			iLocal_753[0] = MAP::_0x23F74C2FDA6E7C61(831283580, &(uLocal_746[0]));
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_901);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_901);
			if ((((iLocal_906 == 256 || iLocal_906 == 4) || iLocal_906 == 16) || iLocal_906 == 1) || iLocal_906 == 2)
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 16793600, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 16777216, 0);
			}
			if (PED::IS_PED_ON_MOUNT(&(uLocal_746[0])) || func_431(&(uLocal_746[0]), 1868526510))
			{
				func_432(&(uLocal_746[0]), &iLocal_901, 1f, 1f, 1, 1);
			}
			else
			{
				func_432(&(uLocal_746[0]), &iLocal_901, 0, 0, 1, 1);
			}
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[1]), true))
	{
		if (!MAP::DOES_BLIP_EXIST(&(iLocal_753[1])) && func_230())
		{
			iLocal_753[1] = MAP::_0x23F74C2FDA6E7C61(831283580, &(uLocal_746[1]));
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_900);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_900);
			if ((((iLocal_906 == 256 || iLocal_906 == 4) || iLocal_906 == 16) || iLocal_906 == 1) || iLocal_906 == 2)
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 16793600, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 16777216, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_900);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_746[1]), iLocal_900);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_900);
		}
	}
}

void func_227(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_433(uParam0);
		func_18(iParam1, uParam2);
	}
	func_19(*uParam0, 1, bParam4);
}

int func_228()
{
	switch (iLocal_14)
	{
		case 0:
			if (fLocal_859 <= 0.85f || fLocal_859 >= 0.99f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fLocal_859 <= 0.9f || fLocal_859 >= 0.99f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_229(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_230()
{
	switch (iLocal_14)
	{
		case 0:
			if (fLocal_859 <= 0.94f || fLocal_859 >= 0.99f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fLocal_859 <= 0.96f || fLocal_859 >= 0.99f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_231()
{
	float fVar0;
	
	if (!func_234(&uLocal_868))
	{
		func_235(&uLocal_868);
	}
	fVar0 = 1f;
	if ((((iLocal_906 == 256 || iLocal_906 == 4) || iLocal_906 == 16) || iLocal_906 == 1) || iLocal_906 == 2)
	{
		fVar0 = 0.7f;
	}
	else
	{
		fVar0 = 1.2f;
	}
	if (func_242(&uLocal_868) >= fVar0)
	{
		if (((!ANIMSCENE::_0x1F0E401031E20146(Local_110, "pbl_Cower") && !ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2]))) && iLocal_829 == 0) && !iLocal_858)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Cower", true);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_110, "pbl_Cower"))
	{
		switch (iLocal_815)
		{
			case 0:
				if (func_242(&uLocal_868) > 3f)
				{
					if (!func_83(&(uLocal_746[0]), 0, 1) || !func_83(&(uLocal_746[1]), 0, 1))
					{
						func_198(&(uLocal_746[2]), Global_35, "RE_WT_BGV_V1_ONE_DEAD", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_815++;
					}
				}
				break;
			
			case 1:
				if (!func_83(&(uLocal_746[0]), 0, 1) && !func_83(&(uLocal_746[1]), 0, 1))
				{
					if (!func_234(&uLocal_895))
					{
						func_235(&uLocal_895);
					}
					else if (func_236(&uLocal_895) > 2f && !func_197(&(uLocal_746[2]), 0))
					{
						func_198(&(uLocal_746[2]), Global_35, "RE_WT_BGV_V1_ALL_DEAD", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_815++;
					}
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
	}
}

void func_232()
{
	float fVar0;
	
	if (iLocal_824 == 0)
	{
		if (!func_234(&uLocal_868))
		{
			func_235(&uLocal_868);
		}
		fVar0 = 1f;
		if ((((iLocal_906 == 256 || iLocal_906 == 4) || iLocal_906 == 16) || iLocal_906 == 1) || iLocal_906 == 2)
		{
			fVar0 = 0.7f;
		}
		else
		{
			fVar0 = 1.2f;
		}
		if (func_242(&uLocal_868) >= fVar0)
		{
			if (((!ANIMSCENE::_0x1F0E401031E20146(Local_110, "pbl_Cower") && !ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2]))) && iLocal_832 == 0) && !iLocal_858)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Cower", true);
			}
		}
	}
}

int func_233()
{
	if ((PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[0]), true) || PED::IS_PED_FATALLY_INJURED(&(uLocal_746[0]))) && (PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[1]), true) || PED::IS_PED_FATALLY_INJURED(&(uLocal_746[1]))))
	{
		MAP::REMOVE_BLIP(iLocal_753[0]);
		MAP::REMOVE_BLIP(iLocal_753[1]);
		return 1;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[0]), true) || PED::IS_PED_FATALLY_INJURED(&(uLocal_746[0]))) && PED::_0x3AA24CCC0D451379(&(uLocal_746[1])))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[1]), Global_35, 4, 0, -1082130432, -1, 0);
		MAP::REMOVE_BLIP(iLocal_753[0]);
		MAP::REMOVE_BLIP(iLocal_753[1]);
		return 1;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(&(uLocal_746[1]), true) || PED::IS_PED_FATALLY_INJURED(&(uLocal_746[1]))) && PED::_0x3AA24CCC0D451379(&(uLocal_746[0])))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[0]), Global_35, 4, 0, -1082130432, -1, 0);
		MAP::REMOVE_BLIP(iLocal_753[0]);
		MAP::REMOVE_BLIP(iLocal_753[1]);
		return 1;
	}
	if (PED::_0x3AA24CCC0D451379(&(uLocal_746[0])) && PED::_0x3AA24CCC0D451379(&(uLocal_746[1])))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[0]), Global_35, 4, 0, -1082130432, -1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_746[1]), Global_35, 4, 0, -1082130432, -1, 0);
		MAP::REMOVE_BLIP(iLocal_753[0]);
		MAP::REMOVE_BLIP(iLocal_753[1]);
		return 1;
	}
	return 0;
	return 0;
}

bool func_234(var uParam0)
{
	return func_434(*uParam0, 1);
}

void func_235(var uParam0)
{
	func_435(uParam0, 0f);
}

float func_236(var uParam0)
{
	if (!func_234(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_436(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_353() - uParam0->f_1);
}

int func_237()
{
	if (ENTITY::IS_ENTITY_DEAD(VEHICLE::_0xA8BA0BAE0173457B(iLocal_76, 0)) && ENTITY::IS_ENTITY_DEAD(VEHICLE::_0xA8BA0BAE0173457B(iLocal_76, 1)))
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	switch (iLocal_814)
	{
		case 0:
			if (iLocal_825 == 0)
			{
				if (func_424(-4f, 1, 0, 0))
				{
					func_198(&(uLocal_746[1]), Global_35, &(sLocal_24[4]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_814++;
				}
			}
			else
			{
				iLocal_814++;
			}
			break;
		
		case 1:
			if (func_424(-2f, 1, 0, 0))
			{
				func_198(&(uLocal_746[1]), Global_35, &(sLocal_24[8]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_814++;
			}
			break;
		
		case 2:
			if (func_424(0f, 1, 0, 0) && !func_422())
			{
				iLocal_814++;
				func_65(5);
			}
			break;
	}
}

void func_239(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (func_61(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 2048, 51, 1);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

int func_240()
{
	float fVar0;
	float fVar1;
	
	if (iLocal_14 == 0)
	{
		fVar0 = 0.79f;
		fVar1 = 0.87f;
	}
	else
	{
		fVar0 = 0.88f;
		fVar1 = 0.89f;
	}
	if (!iLocal_856)
	{
		if (fLocal_859 > fVar0 || !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110, 0))
		{
			PED::FORCE_PED_MOTION_STATE(&(uLocal_746[0]), -668482597, false, 0, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_901);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_901);
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_746[4]), -1, -1, 1f, 1, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_15, 2f, 1.2f, 528, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.2f, 528, 0);
			func_432(&(uLocal_746[0]), &iLocal_901, 0, 0, 1, 1);
			iLocal_856 = 1;
		}
	}
	if (!iLocal_857)
	{
		if (fLocal_859 > fVar1 || !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_110, 0))
		{
			PED::FORCE_PED_MOTION_STATE(&(uLocal_746[1]), -668482597, false, 0, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_900);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_900);
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_746[5]), -1, -1, 1f, 1, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_15, 2f, 1.2f, 528, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.2f, 528, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_900);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_746[1]), iLocal_900);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_900);
			iLocal_857 = 1;
		}
	}
	if (iLocal_857 && iLocal_856)
	{
		return 1;
	}
	return 0;
}

void func_241()
{
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2])))
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uLocal_746[3])) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uLocal_746[2])))
		{
			func_239(&(uLocal_746[2]), Global_35, &uLocal_85, -1, 10);
		}
		else
		{
			func_239(&(uLocal_746[2]), Global_35, &uLocal_85, -1, 5);
		}
	}
	if (!func_234(&uLocal_892))
	{
		func_235(&uLocal_892);
	}
	else if (func_236(&uLocal_892) > 1f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[3])))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uLocal_746[3])) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uLocal_746[2])))
			{
				func_239(&(uLocal_746[3]), Global_35, &uLocal_85, -1, 10);
			}
			else
			{
				func_239(&(uLocal_746[3]), Global_35, &uLocal_85, -1, 5);
			}
		}
	}
}

float func_242(var uParam0)
{
	if (!func_234(uParam0))
	{
		return 0f;
	}
	if (func_436(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_353() - uParam0->f_1);
}

int func_243()
{
	switch (iLocal_14)
	{
		case 0:
			if (func_61(&(uLocal_746[2]), PLAYER::PLAYER_PED_ID(), 1, 1) <= 30f)
			{
				func_241();
				iLocal_826 = 1;
				return 1;
			}
			if (iLocal_826 == 1)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_61(&(uLocal_746[2]), PLAYER::PLAYER_PED_ID(), 1, 1) <= 30f || func_61(&(uLocal_746[3]), PLAYER::PLAYER_PED_ID(), 1, 1) <= 30f)
			{
				func_241();
				iLocal_826 = 1;
				return 1;
			}
			if (iLocal_826 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_244()
{
	func_241();
	switch (iLocal_805)
	{
		case 0:
			if (func_424(-4f, 1, 0, 0))
			{
				if (func_198(&(uLocal_746[2]), Global_35, &(sLocal_34[1]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_805++;
				}
			}
			break;
		
		case 1:
			if (func_424(-4f, 1, 0, 0))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(&(uLocal_746[2]), iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
				func_129(Local_307[2 /*17*/], 0);
				func_129(Local_307[0 /*17*/], 0);
				func_129(Local_307[1 /*17*/], 0);
				func_130(Local_307[2 /*17*/], 0, 0);
				func_130(Local_307[0 /*17*/], 1, 0);
				func_130(Local_307[1 /*17*/], 1, 0);
				iLocal_805++;
			}
			break;
	}
}

void func_245()
{
	func_241();
	switch (iLocal_806)
	{
		case 0:
			if (func_424(-4f, 1, 0, 0))
			{
				if (func_198(&(uLocal_746[3]), Global_35, &(sLocal_34[1]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_806++;
				}
			}
			break;
		
		case 1:
			if (func_424(-4f, 1, 0, 0))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(&(uLocal_746[2]), iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
				iLocal_806++;
			}
			break;
		
		case 2:
			if (func_424(-4f, 1, 0, 0))
			{
				func_129(Local_307[2 /*17*/], 0);
				func_129(Local_307[1 /*17*/], 0);
				func_129(Local_307[0 /*17*/], 0);
				func_130(Local_307[2 /*17*/], 1, 0);
				func_130(Local_307[0 /*17*/], 1, 0);
				func_130(Local_307[1 /*17*/], 1, 0);
				func_65(7);
			}
			break;
	}
}

int func_246()
{
	if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_76))
	{
		return 1;
	}
	return 0;
}

void func_247()
{
	switch (iLocal_811)
	{
		case 0:
			if (!func_234(&uLocal_889))
			{
				func_235(&uLocal_889);
			}
			else if (func_236(&uLocal_889) > 2f)
			{
				func_198(&(uLocal_746[2]), Global_35, &(sLocal_39[4]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_235(&uLocal_889);
				iLocal_811++;
			}
			break;
		
		case 1:
			if (func_236(&uLocal_889) > 6f)
			{
				func_198(&(uLocal_746[2]), Global_35, &(sLocal_39[5]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_235(&uLocal_889);
				iLocal_811++;
			}
			break;
		
		case 2:
			if (func_236(&uLocal_889) > 6f)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_746[2]));
				TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_746[3]));
				iLocal_858 = 1;
				iLocal_811++;
			}
			break;
	}
}

bool func_248(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_249(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_250(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

void func_251(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_253(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_437(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_438(iVar0);
	*uParam0 = 0;
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_376(&(uParam0->f_18));
}

bool func_253(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_254(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_439(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_439(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_439(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_439(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_439(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_439(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_439(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_439(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_255(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && iParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		
		case 555364152:
			return 2;
		
		case -1996978098:
			return 0;
		
		case 1078461828:
			return 1;
		
		case -1535431934:
			return 4;
		
		case -1663301869:
			return 5;
		
		default:
			break;
	}
	return -1;
}

void func_257(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_258(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

void func_259(var uParam0)
{
	if (func_253(uParam0->f_162))
	{
		func_251(&(uParam0->f_162), 1, 1);
	}
	if (func_253(uParam0->f_163))
	{
		func_251(&(uParam0->f_163), 1, 1);
	}
	if (func_253(uParam0->f_164))
	{
		func_251(&(uParam0->f_164), 1, 1);
	}
	if (func_253(uParam0->f_165))
	{
		func_251(&(uParam0->f_165), 1, 1);
	}
}

void func_260(var uParam0)
{
	if (uParam0->f_170)
	{
		func_440();
	}
}

void func_261(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_441(32);
		func_265(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_262(var uParam0)
{
	if (func_442(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_443(uParam0->f_3);
		func_159(uParam0, 0, 1);
		func_444(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_445(0, 0);
		return 1;
	}
	return 0;
}

void func_263()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_264(int iParam0)
{
	if (!func_117(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_250(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((iParam1 || bParam6) || func_267() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_266(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

int func_267()
{
	return Global_1572887->f_12;
}

void func_268(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_269(char* sParam0)
{
	return sParam0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		
		case 1:
			return 12;
		
		case 2:
			return 23;
		
		case 3:
			return 6;
		
		case 4:
			return 17;
		
		case 5:
			return 1;
		
		case 6:
			return 3;
		
		case 7:
			return 23;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 12:
			return 18;
		
		case 13:
			return 12;
		
		case 14:
			return 7;
		
		case 15:
			return 21;
		
		case 16:
			return 19;
		
		case 17:
			return 12;
		
		case 18:
			return 7;
		
		case 19:
			return 1;
		
		case 20:
			return 17;
		
		case 21:
			return 3;
		
		case 22:
			return 1;
		
		case 23:
			return 17;
		
		case 24:
			return 14;
		
		case 27:
			return 11;
		
		case 28:
			return 5;
		
		case 29:
			return 8;
		
		case 30:
			return 38;
		
		case 31:
			return 20;
		
		case 32:
			return 10;
		
		case 33:
			return 13;
		
		case 34:
			return 11;
		
		case 35:
			return 2;
		
		case 36:
			return 12;
		
		case 37:
			return 20;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 12;
		
		case 41:
			return 3;
		
		case 42:
			return 1;
		
		case 43:
			return 27;
		
		case 44:
			return 9;
		
		case 45:
			return 15;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 48:
			return 9;
		
		case 49:
			return 7;
		
		case 50:
			return 36;
		
		case 51:
			return 5;
		
		case 53:
			return 3;
		
		case 54:
			return 6;
		
		case 55:
			return 2;
		
		case 56:
			return 12;
		
		case 57:
			return 14;
		
		case 58:
			return 8;
		
		case 59:
			return 3;
		
		case 60:
			return 11;
		
		case 61:
			return 2;
		
		case 62:
			return 17;
		
		case 63:
			return 6;
		
		case 64:
			return 7;
		
		case 65:
			return 10;
		
		case 66:
			return 12;
		
		case 67:
			return 5;
		
		case 68:
			return 5;
		
		case 69:
			return 5;
		
		case 70:
			return 6;
		
		case 71:
			return 8;
		
		case 72:
			return 9;
		
		case 73:
			return 4;
		
		case 74:
			return 1;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 77:
			return 3;
		
		case 78:
			return 2;
		
		case 79:
			return 6;
		
		case 80:
			return 3;
		
		case 81:
			return 15;
		
		case 82:
			return 9;
		
		case 83:
			return 2;
		
		case 84:
			return 2;
		
		case 85:
			return 11;
		
		case 86:
			return 2;
		
		case 87:
			return 9;
		
		case 88:
			return 2;
		
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 2;
		
		case 92:
			return 3;
		
		case 93:
			return 1;
		
		case 94:
			return 9;
		
		case 95:
			return 1;
		
		case 96:
			return 7;
		
		case 97:
			return 6;
		
		case 98:
			return 4;
		
		case 99:
			return 2;
		
		case 100:
			return 1;
		
		case 101:
			return 2;
		
		case 102:
			return 3;
		
		case 103:
			return 3;
		
		case 104:
			return 3;
		
		case 105:
			return 2;
		
		case 106:
			return 4;
		
		case 107:
			return 1;
		
		case 108:
			return 3;
		
		case 109:
			return 3;
		
		case 110:
			return 1;
		
		case 111:
			return 4;
		
		case 112:
			return 3;
		
		case 113:
			return 3;
		
		case 114:
			return 16;
		
		case 115:
			return 3;
		
		case 116:
			return 7;
		
		case 117:
			return 2;
		
		case 118:
			return 10;
		
		case 119:
			return 17;
		
		default:
			break;
	}
	return 0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 10;
		
		case 2:
			return 22;
		
		case 3:
			return 45;
		
		case 4:
			return 51;
		
		case 5:
			return 68;
		
		case 6:
			return 69;
		
		case 7:
			return 72;
		
		case 8:
			return 95;
		
		case 9:
			return 96;
		
		case 10:
			return 104;
		
		case 11:
			return 106;
		
		case 12:
			return 110;
		
		case 13:
			return 128;
		
		case 14:
			return 140;
		
		case 15:
			return 147;
		
		case 16:
			return 168;
		
		case 17:
			return 187;
		
		case 18:
			return 199;
		
		case 19:
			return 206;
		
		case 20:
			return 207;
		
		case 21:
			return 224;
		
		case 22:
			return 227;
		
		case 23:
			return 228;
		
		case 24:
			return 245;
		
		case 27:
			return 259;
		
		case 28:
			return 270;
		
		case 29:
			return 275;
		
		case 30:
			return 283;
		
		case 31:
			return 321;
		
		case 32:
			return 341;
		
		case 33:
			return 351;
		
		case 34:
			return 364;
		
		case 35:
			return 375;
		
		case 36:
			return 377;
		
		case 37:
			return 389;
		
		case 38:
			return 409;
		
		case 39:
			return 410;
		
		case 40:
			return 411;
		
		case 41:
			return 423;
		
		case 42:
			return 426;
		
		case 43:
			return 427;
		
		case 44:
			return 454;
		
		case 45:
			return 463;
		
		case 46:
			return 478;
		
		case 47:
			return 480;
		
		case 48:
			return 482;
		
		case 49:
			return 491;
		
		case 50:
			return 498;
		
		case 51:
			return 534;
		
		case 53:
			return 539;
		
		case 54:
			return 542;
		
		case 55:
			return 548;
		
		case 56:
			return 550;
		
		case 57:
			return 562;
		
		case 58:
			return 576;
		
		case 59:
			return 584;
		
		case 60:
			return 587;
		
		case 61:
			return 598;
		
		case 62:
			return 600;
		
		case 63:
			return 617;
		
		case 64:
			return 623;
		
		case 65:
			return 630;
		
		case 66:
			return 640;
		
		case 67:
			return 652;
		
		case 68:
			return 657;
		
		case 69:
			return 662;
		
		case 70:
			return 667;
		
		case 71:
			return 673;
		
		case 72:
			return 681;
		
		case 73:
			return 690;
		
		case 74:
			return 694;
		
		case 75:
			return 695;
		
		case 76:
			return 696;
		
		case 77:
			return 697;
		
		case 78:
			return 700;
		
		case 79:
			return 702;
		
		case 80:
			return 708;
		
		case 81:
			return 711;
		
		case 82:
			return 726;
		
		case 83:
			return 735;
		
		case 84:
			return 737;
		
		case 85:
			return 739;
		
		case 86:
			return 750;
		
		case 87:
			return 752;
		
		case 88:
			return 761;
		
		case 89:
			return 763;
		
		case 90:
			return 764;
		
		case 91:
			return 766;
		
		case 92:
			return 768;
		
		case 93:
			return 771;
		
		case 94:
			return 772;
		
		case 95:
			return 781;
		
		case 96:
			return 782;
		
		case 97:
			return 789;
		
		case 98:
			return 795;
		
		case 99:
			return 799;
		
		case 100:
			return 801;
		
		case 101:
			return 802;
		
		case 102:
			return 804;
		
		case 103:
			return 807;
		
		case 104:
			return 810;
		
		case 105:
			return 813;
		
		case 106:
			return 815;
		
		case 107:
			return 819;
		
		case 108:
			return 820;
		
		case 109:
			return 823;
		
		case 110:
			return 826;
		
		case 111:
			return 827;
		
		case 112:
			return 831;
		
		case 113:
			return 834;
		
		case 114:
			return 837;
		
		case 115:
			return 853;
		
		case 116:
			return 856;
		
		case 117:
			return 863;
		
		case 118:
			return 865;
		
		case 119:
			return 875;
		
		default:
			break;
	}
	return -1;
}

int func_272(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*((*uParam2)[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*((*uParam2)[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 1:
					*((*uParam2)[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*((*uParam2)[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*((*uParam2)[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 2:
					*((*uParam2)[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*((*uParam2)[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 3:
					*((*uParam2)[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*((*uParam2)[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*((*uParam2)[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*((*uParam2)[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 4:
					*((*uParam2)[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*((*uParam2)[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 5:
					*((*uParam2)[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*((*uParam2)[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 6:
					*((*uParam2)[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*((*uParam2)[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*((*uParam2)[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 7:
					*((*uParam2)[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*((*uParam2)[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*((*uParam2)[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 8:
					*((*uParam2)[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*((*uParam2)[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*((*uParam2)[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*((*uParam2)[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*((*uParam2)[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 11:
					*((*uParam2)[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*((*uParam2)[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 12:
					*((*uParam2)[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*((*uParam2)[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*((*uParam2)[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*((*uParam2)[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 13:
					*((*uParam2)[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*((*uParam2)[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 14:
					*((*uParam2)[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*((*uParam2)[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 15:
					*((*uParam2)[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*((*uParam2)[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 16:
					*((*uParam2)[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*((*uParam2)[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*((*uParam2)[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*((*uParam2)[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 17:
					*((*uParam2)[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*((*uParam2)[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*((*uParam2)[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*((*uParam2)[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 18:
					*((*uParam2)[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*((*uParam2)[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*((*uParam2)[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*((*uParam2)[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 19:
					*((*uParam2)[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*((*uParam2)[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*((*uParam2)[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 20:
					*((*uParam2)[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*((*uParam2)[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*((*uParam2)[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 21:
					*((*uParam2)[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*((*uParam2)[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*((*uParam2)[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 22:
					*((*uParam2)[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*((*uParam2)[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 2:
					*((*uParam2)[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*((*uParam2)[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 6:
					*((*uParam2)[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*((*uParam2)[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 7:
					*((*uParam2)[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*((*uParam2)[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*((*uParam2)[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*((*uParam2)[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*((*uParam2)[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*((*uParam2)[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 1:
					*((*uParam2)[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*((*uParam2)[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 2:
					*((*uParam2)[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*((*uParam2)[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 12:
					*((*uParam2)[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*((*uParam2)[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 13:
					*((*uParam2)[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*((*uParam2)[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 14:
					*((*uParam2)[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*((*uParam2)[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 26:
					*((*uParam2)[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*((*uParam2)[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 27:
					*((*uParam2)[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*((*uParam2)[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 28:
					*((*uParam2)[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*((*uParam2)[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 29:
					*((*uParam2)[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*((*uParam2)[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 30:
					*((*uParam2)[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*((*uParam2)[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 5:
					*((*uParam2)[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*((*uParam2)[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 6:
					*((*uParam2)[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*((*uParam2)[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 7:
					*((*uParam2)[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*((*uParam2)[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*((*uParam2)[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 1:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 3:
					*((*uParam2)[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*((*uParam2)[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 6:
					*((*uParam2)[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*((*uParam2)[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*((*uParam2)[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 6:
					*((*uParam2)[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*((*uParam2)[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 7:
					*((*uParam2)[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*((*uParam2)[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 15:
					*((*uParam2)[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*((*uParam2)[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 16:
					*((*uParam2)[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*((*uParam2)[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 17:
					*((*uParam2)[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*((*uParam2)[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 18:
					*((*uParam2)[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*((*uParam2)[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 19:
					*((*uParam2)[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*((*uParam2)[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 24:
					*((*uParam2)[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*((*uParam2)[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 25:
					*((*uParam2)[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*((*uParam2)[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*((*uParam2)[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 28:
					*((*uParam2)[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*((*uParam2)[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 29:
					*((*uParam2)[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*((*uParam2)[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 30:
					*((*uParam2)[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*((*uParam2)[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*((*uParam2)[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 31:
					*((*uParam2)[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*((*uParam2)[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 32:
					*((*uParam2)[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*((*uParam2)[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				
				case 33:
					*((*uParam2)[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*((*uParam2)[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_273(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_107(*((*uParam1)[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *((*uParam1)[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_274(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_0x554D9D53F696D002(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_22("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_275(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_276(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_107(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_183(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_446(iVar0, bParam8);
	return iVar0;
}

void func_277(int iParam0)
{
	if (!func_117(iParam0))
	{
		return;
	}
	func_447(iParam0);
}

void func_278(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_279(int iParam0)
{
	if (func_52(iParam0, 2))
	{
		return 200;
	}
	if (func_52(iParam0, 4))
	{
		return 70;
	}
	if (func_52(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_280(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (func_25(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_336() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_25(iParam0, 2);
		bVar1 = func_25(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_165())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_281(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam0 = 45f;
		*uParam1 = 135f;
	}
	else
	{
		*uParam0 = 45f;
		*uParam1 = 125f;
	}
	if (func_52(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 15f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 50f));
	}
	else
	{
		*uParam2 = 70;
	}
}

void func_282(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam1 = 240f;
	}
	else
	{
		*uParam1 = 215f;
	}
	*uParam0 = 110f;
	if (func_52(iParam3, 2))
	{
		*uParam0 = (*uParam0 + 60f);
		*uParam1 = (*uParam1 + 60f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 110f));
	}
	else if (func_52(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 30f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 30f));
	}
	else
	{
		*uParam2 = 70;
	}
}

bool func_283(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_271(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_284(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;
	
	if (func_107(vParam1))
	{
		return 0;
	}
	if (func_289(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return 0;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_77(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return 1;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

int func_285(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_286(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = func_87(bParam6, fParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!uParam4->f_1)
	{
		if (fVar0 < uParam4->f_2 || (func_292(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*uParam4 = func_398();
			uParam4->f_2 = func_205(iParam0, vParam1, 1);
			uParam4->f_1 = 1;
		}
	}
	else if (fVar0 > uParam4->f_2 || (!func_292(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*uParam4 = func_398();
		uParam4->f_2 = func_205(iParam0, vParam1, 1);
		uParam4->f_1 = 0;
	}
}

int func_287(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_398() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_288(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_107(*(uParam0->f_12[iVar0 /*3*/])))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar1 /*3*/])) < BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_289(int iParam0, vector3 vParam1)
{
	int iVar0;
	
	if (!func_25(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_448(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_25(iParam0, 33554432))
	{
		if (func_449(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 1;
	if (func_52(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, 0))
		{
			return 0;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return 0;
			}
		}
	}
	if (func_25(iParam0, 1) && !func_25(iParam0, 2))
	{
		if (func_25(iParam0, 4096) || func_25(iParam0, 2048))
		{
			if (func_450(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_291(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	
	uVar0 = func_1(&uParam0);
	if (!func_451())
	{
		return 0;
	}
	return 1;
}

bool func_292(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_452(vVar0, vParam0) > func_452(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_293(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return (Global_36580[Global_36601 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_295(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_453(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_296()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_267() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_298(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_1;
}

int func_299(int iParam0)
{
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 4;
		
		case 5:
			return 4;
		
		case 1:
			return 4;
		
		case 10:
			return 5;
		
		default:
			break;
	}
	return 1;
}

int func_301()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_302(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_303(var uParam0, int iParam1)
{
	func_454(uParam0, iParam1);
}

int func_304(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

void func_305(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_253(iParam0))
	{
		return;
	}
	iVar0 = func_437(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_306(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_253(iParam0))
	{
		return;
	}
	iVar0 = func_437(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_307(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_253(iParam0))
	{
		return;
	}
	iVar0 = func_437(iParam0);
	if (bParam1)
	{
		func_455(iParam0, 4);
		func_456(iVar0, 1);
		func_457(iVar0, 1);
	}
	else
	{
		func_458(iParam0, 4);
		func_457(iVar0, 0);
	}
}

bool func_308(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_309(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_310(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_311(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_312(vector3 vParam0, float fParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vParam4);
}

float func_313(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_459((fParam0 + fParam1));
}

int func_314(int iParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	if (bParam6)
	{
		func_460(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_461(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, fParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_462(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_462(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_463(iVar0))
		{
			func_318(iVar0, &(uParam1->f_23), 0);
		}
		if (func_463(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_464(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_465(&(uParam1->f_22)));
			func_467(iVar0, func_466(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_468(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_469(&(uParam1->f_22)))
		{
			func_470(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_471(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_439(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_463(iVar0))
		{
			func_473(iVar0, !func_472(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_474(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_475(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_475(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

int func_315(int iParam0, int iParam1)
{
	if (func_476(iParam0) != -1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -1208814201:
		case -535404896:
		case -390289284:
		case 1112571710:
		case 1478983280:
			return 1;
		
		case -1990962020:
		case 1057570823:
			return iParam1;
		
		default:
			break;
	}
	return 0;
}

bool func_316(var uParam0)
{
	return func_439(*uParam0, 32);
}

int func_317(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_318(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_83(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_319(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case -1098045850:
		case 392538360:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_321(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_322(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_323(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_324(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_322(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_322(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_267() == -1 && !func_321(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = 379542007;
				break;
			
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_321(-183018591))
				{
					bVar0 = -183018591;
				}
				else
				{
					bVar0 = 379542007;
				}
				break;
			
			default:
				bVar0 = 379542007;
				break;
		}
	}
	else if (bVar0 == -164645981 && iParam0 == Global_35)
	{
		bVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_322(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_477(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_478(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_479(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_325(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_326(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;
	
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 2139774588:
			return 1;
		
		case 1142025875:
			return 2;
		
		case 1587891565:
			return 4;
		
		case 1877013492:
			return 32;
		
		case -643014279:
			return 64;
		
		case -597116214:
			return 128;
		
		case 551416228:
			return 256;
		
		case 1022576842:
			return 512;
		
		case 953325896:
			return 1024;
		
		case 508358508:
			return 2048;
		
		case -735200598:
			return 4096;
		
		case -856432278:
			return 8192;
		
		case -2010847721:
			return 16384;
		
		case 446961221:
			return 32768;
		
		case -1972216640:
			return 65536;
		
		case 530833824:
			return 131072;
		
		case 1682361219:
			return 262144;
		
		case 158959085:
			return 524288;
		
		case 1919819559:
			return 1048576;
		
		case 1461411082:
			return 2097152;
		
		case -549508280:
			return 4194304;
		
		default:
			break;
	}
	return 0;
}

int func_328(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_329(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

void func_330(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

Vector3 func_331(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_332(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_333(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_334(int iParam0)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		uVar0 = func_480(1);
	}
	else
	{
		uVar0 = func_481(iParam0);
	}
	return uVar0;
}

void func_335(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != 0)
	{
		iVar0 = func_482(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_483(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

int func_336()
{
	return Global_1897952->f_41;
}

void func_337(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1 && !func_52(iParam0, 8192))
	{
		iVar0 = func_483(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_338(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	func_265(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_339(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_25(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_484(262144, iVar0, 0, 1);
		}
	}
	if (func_25(iParam0, 128))
	{
		func_484(128, iVar0, 0, 1);
	}
	else if (func_25(iParam0, 524288))
	{
		func_484(524288, iVar0, 0, 1);
	}
	else if (func_25(iParam0, 536870912))
	{
		func_484(536870912, iVar0, 0, 1);
	}
	else if (func_25(iParam0, 4194304))
	{
		func_484(4194304, iVar0, 0, 1);
	}
	else if (func_25(iParam0, 8388608))
	{
		func_484(8388608, iVar0, 0, 1);
	}
}

void func_340(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_341(bool bParam0)
{
	if (!bParam0 && func_485(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_342()
{
	return Global_1310750->f_16037;
}

int func_343(int iParam0)
{
	if (!func_117(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_344(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_117(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_486(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	func_487(Global_1393447, 1);
	func_488();
	func_489();
	func_490((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_398() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_491();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_484(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_484(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_484(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_492(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_493(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_493((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_346(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_347(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_348(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		
		case 2:
			return 1143368244;
		
		case 1:
			return -1797026825;
		
		case 0:
			return 55818986;
		
		case 4:
			return -2100600611;
		
		case 3:
			return 529020251;
		
		case -1:
			return 0;
		
		default:
			break;
	}
	return 0;
}

bool func_350()
{
	return (Global_1935630->f_44 == -160924582 && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_351(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_352(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (func_351(uParam0, fParam1, fParam2, uParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_353() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_353()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_354(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_355()
{
	return &Global_1899515;
}

int func_356(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_364(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*uParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*uParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_365()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_366(int iParam0)
{
	if (!func_369(iParam0))
	{
		return -1;
	}
	return func_495(func_494(iParam0));
}

bool func_367(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_368(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_369(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_370(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_371(int iParam0)
{
	return func_25(iParam0, Global_1310750->f_16072 | 64);
}

int func_372(int iParam0)
{
	var uVar0;
	int iVar3;
	
	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	var uVar0;
	int iVar3;
	
	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_374(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_375(var uParam0, float fParam1)
{
	if (!func_234(uParam0))
	{
		return 0;
	}
	if (func_236(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_376(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_377(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

void func_378(int iParam0)
{
	func_376(&uLocal_0);
	func_496(1, iParam0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_497();
}

void func_379(var uParam0, bool bParam1, int iParam2)
{
	func_498(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_499(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_51(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_171(1))
						{
							func_51(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_171(1) || *uParam0 & 8192 != 0))
				{
					func_268(uParam0, 33554432);
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_500(uParam0))
			{
				uParam0->f_15 = func_398();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_398() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_501(uParam0);
}

int func_380(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_502(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_503(iParam0, iVar2) <= func_504(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_381(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_505(iParam2, 1, 1, 1, 0))
	{
		func_51(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_421(uParam1, 1);
	func_263();
}

int func_382(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_506(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_507(uParam1);
			if (func_508(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_509(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_421(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_421(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_383(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_510(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_507(uParam2);
		if (func_508(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_509(uParam2)
				{
					func_421(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_384(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_502(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_509(uParam1)
		{
			fVar3 = func_507(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_385(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_398();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_386(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_511(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_394(uParam2, iParam1))
			{
				func_421(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_387(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	if (uParam2->f_12 < IntToFloat(func_512(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_394(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_421(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_388(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_513(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_421(uParam2, 1);
					return 1;
				}
				break;
			
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_421(uParam2, 1);
					return 1;
				}
				break;
			
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_514(iParam1, vVar0, vVar4))
					{
						func_421(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_421(uParam2, 1);
					return 1;
				}
				break;
			
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_514(iParam1, vVar0, vVar7))
					{
						func_421(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_389(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_502(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_515(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_516(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_517(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_518(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_519(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_390(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_391(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_398();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_520(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_521(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_393(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_394(var uParam0, int iParam1)
{
	if (func_522(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_61(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_396()
{
}

int func_397(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_523(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_398();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_205(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_398();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_398()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_399()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_398() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_400(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_504(uParam0);
	if (uParam0->f_12 > func_524(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_525(iParam1);
	iVar1 = func_526(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_401(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_527(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_402(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_528(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_529(uParam1, iParam0))
					{
						if (func_205(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_403(int iParam0, var uParam1)
{
	if (!func_530(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_404(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_398();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_405(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_406(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_398();
	}
	else if (func_398() - uParam1->f_4) > func_531(uParam1)
	{
		return func_532(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_407(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_408()
{
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_76, false))
	{
		return 1;
	}
	return 0;
}

void func_409()
{
	if (iLocal_852 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_746[2])))
		{
			func_190(&(uLocal_746[2]), 0, &(Local_359.f_5), &iLocal_906, 0, 0);
			if (PED::_0x3AA24CCC0D451379(&(uLocal_746[2])) || PED::_0x9682F850056C9ADE(&(uLocal_746[2])))
			{
				if (iLocal_841 == 0)
				{
					iLocal_841 = 1;
					iLocal_809 = 1;
				}
			}
			if (iLocal_906 == 8)
			{
				if (iLocal_842 == 0)
				{
					iLocal_842 = 1;
					iLocal_809 = 3;
				}
			}
			if ((((iLocal_906 == 4 || iLocal_906 == 256) || iLocal_906 == 1) || iLocal_906 == 8192) || iLocal_906 == 2)
			{
				if (iLocal_843 == 0)
				{
					iLocal_843 = 1;
					iLocal_809 = 0;
				}
			}
			if (PED::_0x29FCE825613FEFCA(&(uLocal_746[2]), 500) || PED::_0xD0B7AEB56229D317(Global_35) == &uLocal_746[2])
			{
				if (iLocal_844 == 0)
				{
					iLocal_844 = 1;
					iLocal_809 = 2;
				}
			}
		}
		switch (iLocal_809)
		{
			case 0:
				if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_39[0]), 0.8f, 0))
				{
					iLocal_809 = -1;
					iLocal_852 = 1;
				}
				break;
			
			case 1:
				if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_39[1]), 0.8f, 0))
				{
					iLocal_809 = -1;
					iLocal_852 = 1;
				}
				break;
			
			case 2:
				if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_39[2]), 0.8f, 0))
				{
					iLocal_809 = -1;
					iLocal_852 = 1;
				}
				break;
			
			case 3:
				if (func_200(&(uLocal_746[2]), Global_35, &(sLocal_39[3]), 0.8f, 0))
				{
					iLocal_809 = -1;
					iLocal_852 = 1;
				}
				break;
		}
	}
}

void func_410()
{
	var uVar0[2];
	int iVar3;
	
	if (iLocal_852 == 0)
	{
		uVar0[0] = &uLocal_746[2];
		uVar0[1] = &uLocal_746[3];
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uVar0[iVar3])))
			{
				func_190(&(uVar0[iVar3]), 0, &(Local_359.f_5), &iLocal_906, 0, 0);
				if (PED::_0x3AA24CCC0D451379(&(uVar0[iVar3])) || PED::_0x9682F850056C9ADE(&(uVar0[iVar3])))
				{
					if (iLocal_841 == 0)
					{
						iLocal_841 = 1;
						iLocal_810 = 1;
					}
				}
				if (iLocal_906 == 8)
				{
					if (iLocal_842 == 0)
					{
						iLocal_842 = 1;
						iLocal_810 = 3;
					}
				}
				if ((((iLocal_906 == 4 || iLocal_906 == 256) || iLocal_906 == 1) || iLocal_906 == 8192) || iLocal_906 == 2)
				{
					if (iLocal_843 == 0)
					{
						iLocal_843 = 1;
						iLocal_810 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(&(uVar0[iVar3]), 500) || PED::_0xD0B7AEB56229D317(Global_35) == &uVar0[iVar3])
				{
					if (iLocal_844 == 0)
					{
						iLocal_844 = 1;
						iLocal_810 = 2;
					}
				}
				switch (iLocal_810)
				{
					case 0:
						if (func_200(&(uVar0[iVar3]), Global_35, &(sLocal_39[0]), 0.8f, 0))
						{
							iLocal_810 = -1;
							iLocal_852 = 1;
						}
						break;
					
					case 1:
						if (func_200(&(uVar0[iVar3]), Global_35, &(sLocal_39[1]), 0.8f, 0))
						{
							iLocal_810 = -1;
							iLocal_852 = 1;
						}
						break;
					
					case 2:
						if (func_200(&(uVar0[iVar3]), Global_35, &(sLocal_39[2]), 0.8f, 0))
						{
							iLocal_810 = -1;
							iLocal_852 = 1;
						}
						break;
					
					case 3:
						if (func_200(&(uVar0[iVar3]), Global_35, &(sLocal_39[3]), 0.8f, 0))
						{
							iLocal_810 = -1;
							iLocal_852 = 1;
						}
						break;
				}
			}
			iVar3++;
		}
	}
}

void func_411(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_412(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_411(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_87(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_235(&(iParam1->f_13));
		}
		if (func_533(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_534(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_412(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_433(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_535(*uParam0, 1, 1);
						}
					}
					else if (func_536(iParam1, 22))
					{
						func_535(*uParam0, 0, 1);
					}
				}
				if (func_537(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_538(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_539(iParam8);
					if (func_540(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_541(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_542(iParam1, uParam3, fVar8);
					if (func_543(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_80(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			
			case 3:
				break;
			
			case 4:
				if (func_544(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			
			case 2:
				if (func_537(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_545(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_540(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_538(uParam0, func_537(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_539(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_80(uParam3, 0, 0, 1, 1);
					}
					func_546(iParam1, 1);
				}
				func_542(iParam1, uParam3, fVar8);
				if (func_544(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_18(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_413(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	iVar0 = func_547(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_198(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_414(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_267() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_415(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_548(iParam0, &iVar0, &iVar1);
	if (!func_549(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_550(iVar0, iVar1);
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 1:
			return -2;
		
		case 2:
			return -5;
		
		case 3:
			return -10;
		
		case 4:
			return -20;
		
		case 5:
			return -40;
		
		case 6:
			return -160;
		
		case 7:
			return -320;
		
		case 8:
			return -480;
		
		case 18:
			return -640;
		
		case 9:
			return 0;
		
		case 10:
			return 1;
		
		case 11:
			return 2;
		
		case 12:
			return 5;
		
		case 13:
			return 10;
		
		case 14:
			return 20;
		
		case 15:
			return 40;
		
		case 16:
			return 160;
		
		case 17:
			return 640;
		
		default:
			break;
	}
	return 0;
}

void func_417(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	
	iVar0 = func_551();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_552(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_553(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_554())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_555(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_551();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_556(iVar1);
		func_558(func_557(), 0, 4000);
		func_559(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_560(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_562(func_561(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_416(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_563(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_564(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_564(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_562(func_561(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_416(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_563(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_564(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_564(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_561(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_565(10, 1);
	}
}

void func_418(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_419(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;
	
	uParam5 = uParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_165())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_203(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_61(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_235(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_566(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = uParam15;
				Var3.f_2 = uParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_568(func_567(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_420(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_421(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(uParam0, 134217728);
	}
	else
	{
		func_268(uParam0, 134217728);
	}
}

int func_422()
{
	if ((!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), &(uLocal_746[0]), 80f) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), &(uLocal_746[1]), 80f)) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 0.1f)
	{
		return 1;
	}
	return 0;
}

int func_423(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_424(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_197(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_569(fParam0))
	{
		return 0;
	}
	return 1;
}

void func_425(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) * FtoV((ENTITY::GET_ENTITY_SPEED(iParam1) * 0f)) };
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar9 = { vVar3 - vVar0 };
	fVar12 = func_570(vVar6, vVar9);
	fVar13 = 0.707f;
	if (MISC::ABSF(fVar12) > fVar13)
	{
		if (fVar12 > 0f)
		{
			iLocal_793 = 0;
		}
		else if (func_571(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_793 = 1;
		}
		else
		{
			iLocal_793 = 2;
		}
	}
	else if (func_571(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_793 = 3;
	}
	else
	{
		iLocal_793 = 4;
	}
}

void func_426()
{
	switch (iLocal_793)
	{
		case 0:
			sLocal_863 = "pbl_React_front";
			sLocal_864 = "pbl_React_front";
			break;
		
		case 2:
			sLocal_863 = "pbl_React_Back";
			if (iLocal_14 == 0)
			{
				sLocal_864 = "pbl_React_Back";
			}
			else
			{
				sLocal_864 = "pbl_React_Back_Left";
			}
			break;
		
		case 1:
			sLocal_863 = "pbl_React_Back";
			if (iLocal_14 == 0)
			{
				sLocal_864 = "pbl_React_Back";
			}
			else
			{
				sLocal_864 = "pbl_React_Back_Right";
			}
			break;
		
		case 3:
			sLocal_863 = "pbl_React_Left";
			sLocal_864 = "pbl_React_Left";
			break;
		
		case 4:
			sLocal_863 = "pbl_React_Right";
			sLocal_864 = "pbl_React_Right";
			break;
	}
}

float func_427(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		return Var0.f_3.f_2;
	}
	return 0f;
}

Vector3 func_428(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;
	
	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

void func_429(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

int func_430()
{
	switch (iLocal_14)
	{
		case 0:
			func_425(&(uLocal_746[0]), Global_35);
			func_572();
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
			{
				if (fLocal_860 >= 0.59f && fLocal_860 <= 0.65f)
				{
					return 0;
				}
				else if (fLocal_860 > 0.65f)
				{
					return 1;
				}
				else
				{
					iLocal_845 = 1;
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P3"))
			{
				if (fLocal_860 <= 0.26f)
				{
					return 0;
				}
				else if (fLocal_860 > 0.26f)
				{
					return 1;
				}
				else
				{
					iLocal_845 = 1;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0") && !ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P3"))
			{
				iLocal_845 = 1;
			}
			if (iLocal_845 == 1)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, sLocal_862))
				{
					iLocal_850 = 1;
				}
				if (iLocal_850 == 1)
				{
					if (fLocal_860 >= 0.98f)
					{
						return 1;
					}
				}
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_746[0]), Global_35, 1, 1))
				{
					if (iLocal_850 == 0)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, sLocal_862, true);
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 1:
			func_425(&(uLocal_746[0]), Global_35);
			func_572();
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
			{
				if (fLocal_860 >= 0.59f && fLocal_860 <= 0.65f)
				{
					return 0;
				}
				else if (fLocal_860 > 0.65f)
				{
					return 1;
				}
				else
				{
					iLocal_845 = 1;
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P3"))
			{
				if (fLocal_860 <= 0.26f)
				{
					return 0;
				}
				else if (fLocal_860 > 0.26f)
				{
					return 1;
				}
				else
				{
					iLocal_845 = 1;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0") && !ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P3"))
			{
				iLocal_845 = 1;
			}
			if (iLocal_845 == 1)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, sLocal_862))
				{
					iLocal_850 = 1;
				}
				if (iLocal_850 == 1)
				{
					if (fLocal_860 >= 0.98f)
					{
						return 1;
					}
				}
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_746[0]), Global_35, 1, 1))
				{
					if (iLocal_850 == 0)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, sLocal_862, true);
					}
				}
				else
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_431(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_432(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_433(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

bool func_434(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_435(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_353() - fParam1);
	func_573(uParam0, 1);
	func_574(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_436(var uParam0)
{
	return func_434(*uParam0, 2);
}

int func_437(int iParam0)
{
	return iParam0;
}

void func_438(int iParam0)
{
	if (!func_575(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_439(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_440()
{
	func_576(23);
}

void func_441(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_442(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_443(int iParam0)
{
	int iVar0;
	
	iVar0 = func_577(iParam0);
	if (iVar0 != 0)
	{
		func_578(-1, 24, 0, iVar0);
	}
}

void func_444(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_562(func_561(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_25(iParam0, 2))
	{
		func_579(iParam0, func_334(iParam3));
	}
	if (func_25(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_336();
		}
		func_580(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_52(iParam0, 65536))
	{
		func_581(iParam0, iParam1);
		func_582(iParam0, func_102(iParam0, iParam1));
		func_441(128);
	}
	func_338(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216, 0, 0);
	func_339(iParam0, 1);
	if (!bParam2)
	{
		func_441(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_583(524288);
	}
	if (func_584(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_584(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_445(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_585(&Global_0, 8);
	}
	if (!func_586() || func_267() != -1)
	{
		return;
	}
	func_585(&Global_0, 1);
}

int func_446(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_447(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_448(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];
	
	if (func_107(vParam0))
	{
		return 0;
	}
	uVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_449(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_107(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_450(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_107(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_78(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_451()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_587(func_177());
	if (iVar0 == 8)
	{
		iVar1 = func_178(func_177());
		if (func_180(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_588(func_480(0)))
	{
		return 0;
	}
	if (func_589())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_452(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_453(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_454(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_455(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_456(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_590(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_457(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_458(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

float func_459(float fParam0)
{
	float fVar0;
	
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_460(var uParam0, var uParam1)
{
	vector3 vVar0;
	
	vVar0 = { *uParam0 };
	if (func_591(&uParam1))
	{
		return 1;
	}
	if (!func_592(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_461(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_462(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_593(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_463(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_464(var uParam0)
{
	return func_439(*uParam0, 4);
}

bool func_465(var uParam0)
{
	return func_439(*uParam0, 64);
}

bool func_466(var uParam0)
{
	return func_439(*uParam0, 8);
}

void func_467(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_468(var uParam0)
{
	return func_439(*uParam0, 128);
}

bool func_469(var uParam0)
{
	return func_439(*uParam0, 2048);
}

void func_470(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_471(var uParam0)
{
	return func_439(*uParam0, 1024);
}

bool func_472(var uParam0)
{
	return func_439(*uParam0, 256);
}

void func_473(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_474(var uParam0)
{
	return func_439(*uParam0, 512);
}

bool func_475(var uParam0)
{
	return func_439(*uParam0, 4096);
}

int func_476(int iParam0)
{
	switch (iParam0)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			return 0;
		
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			return 2;
		
		case 363815774:
			return 1;
		
		case -1910990966:
		case -1421951598:
		case 1921874948:
			return 3;
		
		case -1090280091:
		case -1076294934:
			return 4;
		
		case -1011228908:
		case -1008616424:
		case 424175505:
			return 5;
	}
	return -1;
}

int func_477(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_594(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_595((375 + iVar28), 1);
			if (func_596(iParam0, &Var0, iVar5, 0))
			{
				if (func_597(iParam0, &Var6, iVar5))
				{
					Var29 = { func_598(iParam0, Var0, iVar5, 0) };
					func_599(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_600(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_601(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_602(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_478(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		
		case 363815774:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		
		case -1090280091:
		case -1076294934:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_479(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_480(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_603(1, 0, 0);
	}
	else
	{
		iVar0 = func_177();
	}
	return func_481(iVar0);
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		
		case 78:
			return 2;
		
		case 37:
			return 4;
		
		case 38:
			return 8;
		
		case 93:
			return 16;
		
		case 82:
			return 32;
		
		case 95:
			return 64;
		
		case 65:
			return 128;
		
		case 68:
			return 256;
		
		case 69:
			return 512;
		
		case 3:
			return 1024;
		
		case 61:
			return 2048;
		
		case 110:
			return 4096;
		
		case 5:
			return 8192;
		
		case 35:
			return 16384;
		
		case 22:
			return 32768;
		
		case 105:
			return 65536;
		
		case 8:
			return 131072;
		
		case 32:
			return 262144;
		
		case 26:
			return 524288;
		
		case 115:
			return 1048576;
		
		case 76:
			return 2097152;
		
		case 92:
			return 4194304;
		
		case 56:
			return 8388608;
		
		case 120:
			return 16777216;
		
		default:
			break;
	}
	return 0;
}

int func_482(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_483(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_484(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_275(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_264(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_604(iVar0) < func_605(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_338(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_485(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_606(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_486(int iParam0)
{
	int iVar0;
	
	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_487(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_488()
{
	int iVar0;
	
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_607(iVar0, 128))
		{
			func_608(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_489()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_607(iVar0, 128) && func_607(iVar0, 1))
		{
			func_608(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_490(float fParam0)
{
	int iVar0;
	
	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_491()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_25(iVar0, 16777216))
		{
			if (!func_609(iVar0))
			{
				func_610(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_492(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_265(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		
		case 1:
			func_265(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		
		case 2:
			func_265(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		
		case 3:
			func_265(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		
		case 4:
			func_265(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		
		case 5:
			func_265(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_265(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_493(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar0 = func_353();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_494(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_495(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_496(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_497()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(4, 1, 0);
}

void func_498(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_611();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_612(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_499(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_500(var uParam0)
{
	int iVar0;
	
	iVar0 = Global_1935630->f_40;
	if (func_267() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_613(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_613(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_526(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_501(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_614(uParam0);
	}
}

int func_502(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_526(iParam2);
	}
	else
	{
		iVar1 = func_525(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_526(iParam0);
	}
	else
	{
		iVar0 = func_525(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_3(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_503(int iParam0, int iParam1)
{
	return func_61(iParam0, iParam1, 1, 1);
}

float func_504(var uParam0)
{
	return uParam0->f_26;
}

int func_505(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		
		case 4:
		case 16:
			return iParam1;
		
		case 32:
		case 64:
		case 128:
			return iParam3;
		
		case 1:
		case 2:
		case 2048:
			return 1;
		
		case 8192:
			return iParam4;
		
		default:
			break;
	}
	return 0;
}

int func_506(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_61(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_615(iVar0, 0)))
		{
			if (func_616(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_507(var uParam0)
{
	return uParam0->f_17;
}

int func_508(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_3(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_509(var uParam0)
{
	return uParam0->f_18;
}

int func_510(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_615(iVar0, 0)))
		{
			if (func_617(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_511(var uParam0)
{
	return uParam0->f_23;
}

int func_512(var uParam0)
{
	return uParam0->f_21;
}

int func_513(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				
				case 2:
					iVar0 = 1;
					break;
				
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				
				case 1:
					iVar0 = 1;
					break;
				
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				
				case 3:
					iVar0 = 1;
					break;
				
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				
				case 1:
					iVar0 = 1;
					break;
				
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				
				case 3:
					iVar0 = 1;
					break;
				
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_514(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_618(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_619(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_516(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_517(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_172(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_518(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_172(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_519(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	fVar0 = 40f;
	if (func_172(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_520(int iParam0, var uParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*uParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_521(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_620(iParam0, 1, 0, 0) != 2055893578)
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_522(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_523(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	
	fVar0 = func_205(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_524(var uParam0)
{
	return uParam0->f_24;
}

int func_525(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_526(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_527(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_520(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_61(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_61(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_528(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_364(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_529(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_529(uParam1, iVar1))
				{
					if (func_205(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_529(var uParam0, int iParam1)
{
	int iVar0;
	
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_530(int iParam0)
{
	if (func_554())
	{
		return 0;
	}
	return func_621(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_531(var uParam0)
{
	return uParam0->f_20;
}

int func_532(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_533(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_622(iParam0, uParam1))
		{
			if (!func_3(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_80(uParam2, 0, 0, 1, 0);
				func_51(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_3(uParam1->f_10, 1))
		{
			func_623(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_268(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_534(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	
	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_3(iParam4, 32);
		func_79(iParam1, uParam2, 0);
		iVar5 = func_624(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_80(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_536(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_536(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_625(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_626(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_627(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_536(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_535(*uParam0, 1, 1);
			}
			else
			{
				func_535(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_535(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_536(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_537(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_628(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_538(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_629(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_539(int iParam0)
{
	if (func_3(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_3(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_540(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	
	iVar1 = func_630(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_631(Global_35)) || func_632(Global_35)) || func_633(Global_35));
	fVar12 = -1f;
	if (func_234(&(iParam1->f_13)))
	{
		fVar12 = func_236(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_253(((*uParam4)[iVar0 /*17*/])->f_6);
		func_634(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_635(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_636(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_80(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_637(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_79(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_638(iParam1, fParam6, iParam1->f_9))
					{
						func_235(&(iParam1->f_18));
						if (bVar6)
						{
							func_637(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_639(iParam1, fParam2);
	}
	return bVar5;
}

void func_541(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_542(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_640((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_639(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_543(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_641(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_642(iParam1, 0);
				func_79(iParam1, uParam2, func_536(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_544(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_235(&(iParam1->f_18));
			return 0;
		}
		else if (func_234(&(iParam1->f_18)))
		{
			func_376(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_234(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_643(&(iParam1->f_18), fParam2);
	return 1;
}

void func_545(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_634(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_546(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_547(int* iParam0)
{
	if (func_536(iParam0, 0))
	{
		if (func_644(iParam0))
		{
			func_546(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_548(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_549(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_645(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_646(iParam0))
	{
		return 0;
	}
	if (func_647(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_648(iParam0, 1)) || func_649(32768))
	{
		if (!func_648(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_650())
	{
		return 0;
	}
	return 1;
}

void func_550(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_551()
{
	int iVar0;
	
	iVar0 = func_651();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_552(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_267() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_87(MISC::ABSF(fVar1) < 1f, func_87(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_553(int iParam0)
{
	if (!func_652(iParam0))
	{
		return 0;
	}
	return func_653(iParam0);
}

int func_554()
{
	if (func_267() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_555(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case -40:
		case 40:
			return 1;
		
		case -80:
		case 80:
			return 2;
		
		case -120:
		case 120:
			return 3;
		
		case -160:
		case 160:
			return 4;
		
		case -200:
		case 200:
			return 5;
		
		case -240:
		case 240:
			return 6;
		
		case -280:
		case 280:
			return 7;
		
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_557()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_558(int iParam0, bool bParam1, int iParam2)
{
	func_654((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_655(iParam0);
}

void func_559(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_656(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_560(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	bVar3 = false;
	if (func_657(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_658(iVar5, &iVar2, &iVar0))
			{
				if (!func_659(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_660(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_661(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_551() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_551() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_662();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

struct<2> func_561(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

void func_562(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

char* func_563(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		
		case 530833824:
			return "HONOR_EVENT_THEFT";
		
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		
		default:
			break;
	}
	return "";
}

var func_564(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_663(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_565(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_664(iParam0))
	{
		return 0;
	}
	if (!func_586())
	{
		return 0;
	}
	if (!func_665(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_566(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_567(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
{
	struct<7> Var0;
	
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = uParam7;
	return func_666(iParam0, &Var0);
}

int func_568(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_569(float fParam0)
{
	if (func_667(1))
	{
		return 1;
	}
	if (func_234(&uLocal_0) && !func_643(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

float func_570(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_571(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, Vector3 vParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_572()
{
	switch (iLocal_793)
	{
		case 0:
			sLocal_862 = "pbl_Breakout_Front";
			break;
		
		case 2:
			sLocal_862 = "pbl_Breakout_Back";
			break;
		
		case 1:
			sLocal_862 = "pbl_Breakout_Back";
			break;
		
		case 3:
			sLocal_862 = "pbl_Breakout_Left";
			break;
		
		case 4:
			sLocal_862 = "pbl_Breakout_Right";
			break;
	}
}

void func_573(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_574(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_575(int iParam0)
{
	return func_590(iParam0, 2);
}

void func_576(int iParam0)
{
	int iVar0;
	
	if (func_267() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_254(func_668(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_668(iVar0), func_296(), 1))
			{
				func_669(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		
		case 60:
			return 37;
		
		case 97:
			return 26;
		
		default:
			break;
	}
	return 0;
}

void func_578(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = (Global_1415419->f_19[iParam0 /*12*/])->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if ((Global_1415419->f_19[iVar0 /*12*/])->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_670() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_670();
					}
					func_671(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_268(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_579(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != 0)
	{
		iVar0 = func_482(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_483(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_580(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1 && !func_52(iParam0, 8192))
	{
		iVar0 = func_483(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_581(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_271(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_582(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (func_25(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_107(vParam1))
	{
		return;
	}
	if (!func_117(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_107(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_285(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*(Global_17503.f_2084[iVar1 /*5*/]) = { vParam1 };
		(Global_17503.f_2084[iVar1 /*5*/])->f_3 = iParam0;
		(Global_17503.f_2084[iVar1 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17503.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { vParam1 };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = iParam0;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
			}
			else
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { *(Global_17503.f_2084[iVar0 + 1 /*5*/]) };
			}
			iVar0++;
		}
	}
}

void func_583(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_610(iVar0, iParam0);
		iVar0++;
	}
}

int func_584(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 2;
		
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 4:
			return 2;
		
		case 77:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 3;
		
		case 7:
			return 2;
		
		case 78:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 2;
		
		case 12:
			return 3;
		
		case 13:
			return 2;
		
		case 14:
			return 2;
		
		case 15:
			return 5;
		
		case 16:
			return 1;
		
		case 17:
			return 2;
		
		case 18:
			return 2;
		
		case 91:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 3;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 3;
		
		case 94:
			return 8;
		
		case 24:
			return 3;
		
		case 119:
			return 4;
		
		case 27:
			return 6;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 4;
		
		case 31:
			return 3;
		
		case 32:
			return 1;
		
		case 33:
			return 2;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 96:
			return 4;
		
		case 36:
			return 3;
		
		case 37:
			return 4;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 4;
		
		case 41:
			return 3;
		
		case 42:
			return 2;
		
		case 99:
			return 2;
		
		case 44:
			return 3;
		
		case 43:
			return 4;
		
		case 45:
			return 4;
		
		case 46:
			return 2;
		
		case 47:
			return 1;
		
		case 48:
			return 2;
		
		case 105:
			return 2;
		
		case 49:
			return 1;
		
		case 50:
			return 9;
		
		case 51:
			return 2;
		
		case 52:
			return 2;
		
		case 53:
			return 2;
		
		case 54:
			return 2;
		
		case 56:
			return 3;
		
		case 57:
			return 8;
		
		case 58:
			return 2;
		
		case 59:
			return 2;
		
		case 60:
			return 2;
		
		case 61:
			return 1;
		
		case 62:
			return 3;
		
		case 63:
			return 3;
		
		case 64:
			return 3;
		
		case 65:
			return 2;
		
		case 66:
			return 3;
		
		case 67:
			return 1;
		
		case 68:
			return 2;
		
		case 69:
			return 1;
		
		case 70:
			return 2;
		
		case 71:
			return 2;
		
		case 72:
			return 3;
		
		case 73:
			return 3;
		
		case 74:
			return 1;
		
		case 79:
			return 4;
		
		case 80:
			return 2;
		
		case 81:
			return 4;
		
		case 82:
			return 4;
		
		case 83:
			return 2;
		
		case 84:
			return 2;
		
		case 85:
			return 2;
		
		case 86:
			return 2;
		
		case 87:
			return 3;
		
		case 88:
			return 2;
		
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 92:
			return 2;
		
		case 93:
			return 1;
		
		case 95:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
			return 3;
		
		case 100:
			return 1;
		
		case 101:
			return 2;
		
		case 102:
			return 3;
		
		case 103:
			return 3;
		
		case 104:
			return 3;
		
		case 106:
			return 9;
		
		case 107:
			return 2;
		
		case 108:
			return 5;
		
		case 109:
			return 2;
		
		case 110:
			return 1;
		
		case 111:
			return 7;
		
		case 112:
			return 1;
		
		case 113:
			return 3;
		
		case 114:
			return 4;
		
		case 115:
			return 2;
		
		case 117:
			return 2;
		
		case 116:
			return 1;
		
		case 118:
			return 2;
		
		default:
			break;
	}
	return 0;
}

void func_585(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_586()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_587(int iParam0)
{
	if (!func_374(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_588(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_589()
{
	return Global_1894899 & 2 != 0;
}

bool func_590(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

bool func_591(var uParam0)
{
	return func_439(*uParam0, 1);
}

int func_592(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	if (func_672(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_593(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_673(iParam1))
		{
			func_674(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_675(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_676(iParam0, 0);
			bVar0 = true;
		}
		func_677(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

struct<5> func_594(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_678(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_661(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_598(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_679(bParam1) };
			if (iParam2 && func_680(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_596(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_596(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_597(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_681(bParam1) };
			switch (func_682(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
			if (func_683(iParam0, -1823706425))
			{
				Var0 = { func_598(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_683(iParam0, -1483207246))
			{
				Var0 = { func_598(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_684(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_595(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		
		case 1:
			return 1704602624;
		
		case 2:
			return 1214181762;
		
		case 3:
			return -430578371;
		
		case 4:
			return -730381952;
		
		case 5:
			return -253503777;
		
		case 6:
			return 1352275534;
		
		case 7:
			return 1666399168;
		
		case 8:
			return -1911121386;
		
		case 9:
			return 1756656691;
		
		case 10:
			return -1774867076;
		
		case 11:
			return -421952220;
		
		case 12:
			return -1087003323;
		
		case 13:
			return 1231618917;
		
		case 14:
			return -1183777174;
		
		case 15:
			return -841767082;
		
		case 16:
			return 1043717005;
		
		case 17:
			return 142663787;
		
		case 18:
			return 1718143051;
		
		case 19:
			return -6605744;
		
		case 20:
			return 953047564;
		
		case 21:
			return 769706682;
		
		case 22:
			return 1635590003;
		
		case 23:
			return -2047978619;
		
		case 24:
			return -586319254;
		
		case 25:
			return 249896112;
		
		case 26:
			return -1060513333;
		
		case 27:
			return 1317351007;
		
		case 28:
			return -500478573;
		
		case 29:
			return -806573802;
		
		case 30:
			return -1109949204;
		
		case 31:
			return -740156546;
		
		case 32:
			return -684532710;
		
		case 33:
			return 1158805436;
		
		case 34:
			return -559473670;
		
		case 35:
			return -797147251;
		
		case 36:
			return -382216265;
		
		case 37:
			return 1419177114;
		
		case 38:
			return 1704297235;
		
		case 39:
			return -1139016418;
		
		case 40:
			return 897705377;
		
		case 41:
			return 17961769;
		
		case 42:
			return 205582207;
		
		case 43:
			return 900740963;
		
		case 44:
			return -1369589344;
		
		case 45:
			return -1695823795;
		
		case 46:
			return -41453074;
		
		case 47:
			return 539767227;
		
		case 48:
			return 1210490314;
		
		case 49:
			return -399684751;
		
		case 50:
			return 2138893455;
		
		case 51:
			return -1617010487;
		
		case 52:
			return -832377028;
		
		case 53:
			return -428040245;
		
		case 54:
			return 1279288897;
		
		case 55:
			return -594897905;
		
		case 56:
			return -1360459240;
		
		case 57:
			return 1838428396;
		
		case 58:
			return -1467846997;
		
		case 59:
			return -490610263;
		
		case 60:
			return -1885413079;
		
		case 61:
			return 708884155;
		
		case 62:
			return -134459952;
		
		case 63:
			return -1912136700;
		
		case 64:
			return -1268031552;
		
		case 65:
			return 1177953227;
		
		case 66:
			return 2130805296;
		
		case 67:
			return 38093490;
		
		case 68:
			return -269153218;
		
		case 69:
			return -1995068011;
		
		case 70:
			return -164284834;
		
		case 71:
			return 1446463345;
		
		case 72:
			return 1501315823;
		
		case 73:
			return -750379482;
		
		case 74:
			return -929560937;
		
		case 75:
			return 608323241;
		
		case 76:
			return 1030796013;
		
		case 77:
			return 1915057434;
		
		case 78:
			return -1582276476;
		
		case 79:
			return 692059311;
		
		case 80:
			return 2062839241;
		
		case 81:
			return -1884531872;
		
		case 82:
			return -866434534;
		
		case 83:
			return -1252192421;
		
		case 84:
			return 1243288963;
		
		case 85:
			return -1953772189;
		
		case 86:
			return 754411745;
		
		case 87:
			return 545309006;
		
		case 88:
			return -1089810811;
		
		case 89:
			return 1957869400;
		
		case 90:
			return -241412332;
		
		case 91:
			return -1548010959;
		
		case 92:
			return 550150488;
		
		case 93:
			return 946565453;
		
		case 94:
			return 434443248;
		
		case 95:
			return -1709914938;
		
		case 96:
			return 366686112;
		
		case 97:
			return -1370063350;
		
		case 98:
			return 2126829550;
		
		case 99:
			return 226552910;
		
		case 100:
			return 721193431;
		
		case 101:
			return -315672460;
		
		case 102:
			return 623544501;
		
		case 103:
			return 259556714;
		
		case 104:
			return -2125361825;
		
		case 105:
			return 1078230356;
		
		case 106:
			return 1885364811;
		
		case 107:
			return 1630382737;
		
		case 108:
			return 1738245512;
		
		case 109:
			return 1540262216;
		
		case 110:
			return 1016871472;
		
		case 111:
			return 13829069;
		
		case 112:
			return 737051352;
		
		case 113:
			return 1734614610;
		
		case 114:
			return -208715295;
		
		case 115:
			return 1435062936;
		
		case 116:
			return 1483055553;
		
		case 117:
			return 380335002;
		
		case 118:
			return -1079385677;
		
		case 119:
			return 676610411;
		
		case 120:
			return 2145419552;
		
		case 121:
			return 657238733;
		
		case 122:
			return 1850579281;
		
		case 123:
			return -1923957384;
		
		case 124:
			return -1142828108;
		
		case 125:
			return -1400618531;
		
		case 126:
			return -1433857135;
		
		case 127:
			return 209987206;
		
		case 128:
			return 1686943047;
		
		case 129:
			return -59178517;
		
		case 130:
			return 2134884601;
		
		case 131:
			return 651707517;
		
		case 132:
			return -633788535;
		
		case 133:
			return 116394463;
		
		case 134:
			return -1196973875;
		
		case 135:
			return 801752086;
		
		case 136:
			return 184475332;
		
		case 137:
			return -1880922659;
		
		case 138:
			return -898138634;
		
		case 139:
			return -2107418444;
		
		case 140:
			return -679970099;
		
		case 141:
			return -1531392549;
		
		case 142:
			return 1612483376;
		
		case 143:
			return 463930900;
		
		case 144:
			return -632148238;
		
		case 145:
			return 55303249;
		
		case 146:
			return 2108322089;
		
		case 147:
			return -1358896714;
		
		case 148:
			return 74475632;
		
		case 149:
			return -28710953;
		
		case 150:
			return -1791599168;
		
		case 151:
			return 1605938169;
		
		case 152:
			return 1255242276;
		
		case 153:
			return 636467727;
		
		case 154:
			return -1567688525;
		
		case 155:
			return -77886679;
		
		case 156:
			return -1057900679;
		
		case 157:
			return -1960888134;
		
		case 158:
			return -1719717295;
		
		case 159:
			return -1779244911;
		
		case 160:
			return -670540863;
		
		case 161:
			return 223362311;
		
		case 162:
			return 1150824567;
		
		case 163:
			return 974471191;
		
		case 164:
			return 1989683968;
		
		case 165:
			return 254804477;
		
		case 166:
			return 192057609;
		
		case 167:
			return 1553957817;
		
		case 168:
			return 2099829015;
		
		case 169:
			return -840300007;
		
		case 170:
			return -1948423372;
		
		case 171:
			return 981083654;
		
		case 172:
			return 1283289876;
		
		case 173:
			return -606884489;
		
		case 174:
			return -100418572;
		
		case 175:
			return 663645231;
		
		case 176:
			return 1442217033;
		
		case 177:
			return 1410986244;
		
		case 178:
			return 847409839;
		
		case 179:
			return 923926911;
		
		case 180:
			return 109995826;
		
		case 181:
			return -747412737;
		
		case 182:
			return 1114341727;
		
		case 183:
			return -539456939;
		
		case 184:
			return 45887121;
		
		case 185:
			return 913271624;
		
		case 186:
			return -1652812715;
		
		case 187:
			return -1791365775;
		
		case 188:
			return -979299941;
		
		case 189:
			return 713062001;
		
		case 190:
			return -575045963;
		
		case 191:
			return 1852965262;
		
		case 192:
			return -1398836354;
		
		case 193:
			return -1829885298;
		
		case 194:
			return -1773850357;
		
		case 195:
			return -564258009;
		
		case 196:
			return 2016532685;
		
		case 197:
			return -1070563798;
		
		case 198:
			return -1619221343;
		
		case 199:
			return -345571691;
		
		case 200:
			return 544288390;
		
		case 201:
			return 159578294;
		
		case 202:
			return -76852849;
		
		case 203:
			return 1110295244;
		
		case 204:
			return 2104563477;
		
		case 205:
			return 1947827651;
		
		case 206:
			return -933072766;
		
		case 207:
			return 2104388648;
		
		case 208:
			return -1677140601;
		
		case 209:
			return -2133097881;
		
		case 210:
			return -826678792;
		
		case 211:
			return -513522325;
		
		case 212:
			return 1970588249;
		
		case 213:
			return -2080032591;
		
		case 214:
			return 1758847745;
		
		case 215:
			return 895010282;
		
		case 216:
			return 1786352060;
		
		case 217:
			return -833319691;
		
		case 218:
			return 1591329969;
		
		case 219:
			return 2123222014;
		
		case 220:
			return -1578397674;
		
		case 221:
			return 1473261684;
		
		case 222:
			return -241855024;
		
		case 223:
			return 12999093;
		
		case 224:
			return -6796437;
		
		case 225:
			return -268116367;
		
		case 226:
			return -636470867;
		
		case 227:
			return 1737668280;
		
		case 228:
			return 892807236;
		
		case 229:
			return -733247890;
		
		case 230:
			return 24047176;
		
		case 231:
			return -1561999014;
		
		case 232:
			return -2052774042;
		
		case 233:
			return -997150586;
		
		case 234:
			return -1189569496;
		
		case 235:
			return 46488141;
		
		case 236:
			return 1046566686;
		
		case 237:
			return 325139909;
		
		case 238:
			return -1585141069;
		
		case 239:
			return 802754820;
		
		case 240:
			return 1415981582;
		
		case 241:
			return -1886147520;
		
		case 242:
			return 654877947;
		
		case 243:
			return -415648720;
		
		case 244:
			return 1221327846;
		
		case 245:
			return 923162715;
		
		case 246:
			return 625423581;
		
		case 247:
			return 326668608;
		
		case 248:
			return 669530755;
		
		case 249:
			return 429759982;
		
		case 250:
			return -2111934838;
		
		case 251:
			return 1886178087;
		
		case 252:
			return 1587783573;
		
		case 253:
			return -279722001;
		
		case 254:
			return 1310070322;
		
		case 255:
			return 724026534;
		
		case 256:
			return 137387616;
		
		case 257:
			return -653439684;
		
		case 258:
			return 1376835592;
		
		case 259:
			return -1824203570;
		
		case 260:
			return -1654197998;
		
		case 261:
			return 798987653;
		
		case 262:
			return 976923323;
		
		case 263:
			return 1167442289;
		
		case 264:
			return 986998820;
		
		case 265:
			return -2119169513;
		
		case 266:
			return -2015960939;
		
		case 267:
			return -1287636759;
		
		case 268:
			return -706917073;
		
		case 269:
			return -2166805;
		
		case 270:
			return -1391602433;
		
		case 271:
			return 1782075221;
		
		case 272:
			return 1282544585;
		
		case 273:
			return 1732594027;
		
		case 274:
			return -1058817012;
		
		case 275:
			return 1090546265;
		
		case 276:
			return -1783120823;
		
		case 277:
			return -1535745896;
		
		case 278:
			return -2086922122;
		
		case 279:
			return -1675198649;
		
		case 280:
			return 1189497682;
		
		case 281:
			return -1565675519;
		
		case 282:
			return -268973591;
		
		case 283:
			return 1039159916;
		
		case 284:
			return 1111816631;
		
		case 285:
			return 405591388;
		
		case 286:
			return 897456793;
		
		case 287:
			return 104187473;
		
		case 288:
			return 773808542;
		
		case 289:
			return -1120669954;
		
		case 290:
			return -1389278274;
		
		case 291:
			return 552979403;
		
		case 292:
			return -1571578784;
		
		case 293:
			return -708312114;
		
		case 294:
			return 688823508;
		
		case 295:
			return -1622147240;
		
		case 296:
			return 830292162;
		
		case 297:
			return 226276782;
		
		case 298:
			return -678416628;
		
		case 299:
			return -1098528034;
		
		case 300:
			return 316207340;
		
		case 301:
			return -1909200748;
		
		case 302:
			return -939652363;
		
		case 303:
			return -1990194462;
		
		case 304:
			return -375447933;
		
		case 305:
			return 537014919;
		
		case 306:
			return 1784584921;
		
		case 307:
			return 1084182731;
		
		case 308:
			return -1045471300;
		
		case 309:
			return 1617414719;
		
		case 310:
			return -787761753;
		
		case 311:
			return -490616606;
		
		case 312:
			return 1491346514;
		
		case 313:
			return -1311702610;
		
		case 314:
			return -904250715;
		
		case 315:
			return 1034665895;
		
		case 316:
			return -101524555;
		
		case 317:
			return 1419152594;
		
		case 318:
			return -451359317;
		
		case 319:
			return -1915385310;
		
		case 320:
			return 1315162488;
		
		case 321:
			return -361152079;
		
		case 322:
			return -2041626192;
		
		case 323:
			return -2077812539;
		
		case 324:
			return -1371514637;
		
		case 325:
			return 1730017037;
		
		case 326:
			return 892816668;
		
		case 327:
			return -1994943603;
		
		case 328:
			return 603133554;
		
		case 329:
			return -30160144;
		
		case 330:
			return -1248299493;
		
		case 331:
			return 727393558;
		
		case 332:
			return 755611221;
		
		case 333:
			return -170255458;
		
		case 334:
			return 1011151573;
		
		case 335:
			return 1122339631;
		
		case 336:
			return 454815308;
		
		case 337:
			return 990701735;
		
		case 338:
			return -246340825;
		
		case 339:
			return -1410671073;
		
		case 340:
			return 1547608292;
		
		case 341:
			return -714132970;
		
		case 342:
			return 732290690;
		
		case 343:
			return 971340545;
		
		case 344:
			return -234132662;
		
		case 345:
			return -2143057988;
		
		case 346:
			return -993947465;
		
		case 347:
			return -486552269;
		
		case 348:
			return -1156317860;
		
		case 349:
			return 1229625803;
		
		case 350:
			return -388596167;
		
		case 351:
			return -1204639465;
		
		case 352:
			return -1384685096;
		
		case 353:
			return -2026728113;
		
		case 354:
			return -1228057307;
		
		case 355:
			return 1835126290;
		
		case 356:
			return 1890833594;
		
		case 357:
			return -751549960;
		
		case 358:
			return -1682270750;
		
		case 359:
			return -1839865333;
		
		case 360:
			return -1990383629;
		
		case 361:
			return 1712094016;
		
		case 362:
			return 1532953697;
		
		case 363:
			return 1620318083;
		
		case 364:
			return -307230331;
		
		case 365:
			return -1034549620;
		
		case 366:
			return -1293064293;
		
		case 367:
			return -1540142553;
		
		case 368:
			return -1769886012;
		
		case 369:
			return -1983081126;
		
		case 370:
			return -1106117124;
		
		case 371:
			return -1873108338;
		
		case 372:
			return -2097543219;
		
		case 373:
			return 155413195;
		
		case 374:
			return -1162387149;
		
		case 375:
			return 1728382685;
		
		case 376:
			return -649335959;
		
		case 377:
			return -1876502240;
		
		case 378:
			return -2107032155;
		
		case 379:
			return 619103418;
		
		case 380:
			return 1355448197;
		
		case 381:
			return 1681762005;
		
		case 382:
			return 1026887814;
		
		case 383:
			return 354352628;
		
		case 384:
			return 1519366642;
		
		case 385:
			return -82757515;
		
		case 386:
			return 386306655;
		
		case 387:
			return 1243962119;
		
		case 388:
			return 756214903;
		
		case 389:
			return -718417579;
		
		case 390:
			return -1445516411;
		
		case 391:
			return -672392892;
		
		case 392:
			return 1465341584;
		
		case 393:
			return -427758369;
		
		case 394:
			return -735647142;
		
		case 395:
			return 1535838048;
		
		case 396:
			return -602272282;
		
		case 397:
			return 2051264661;
		
		case 398:
			return 487172188;
		
		case 399:
			return 282270687;
		
		case 400:
			return 1607708943;
		
		case 401:
			return 1686264939;
		
		case 402:
			return 314786149;
		
		case 403:
			return 1402841185;
		
		case 404:
			return 1099170772;
		
		case 405:
			return 2125676786;
		
		case 406:
			return -363896735;
		
		case 407:
			return -468790222;
		
		case 408:
			return -1779133048;
		
		case 409:
			return 1732537631;
		
		case 410:
			return 1755095401;
		
		case 411:
			return 835771095;
		
		case 412:
			return 1963317232;
		
		case 413:
			return 259627919;
		
		case 414:
			return 1299075397;
		
		case 415:
			return -1509094230;
		
		case 416:
			return 61132362;
		
		case 417:
			return 1549741908;
		
		case 418:
			return 288484254;
		
		case 419:
			return -1877032947;
		
		case 420:
			return -1395676456;
		
		case 421:
			return 1136146715;
		
		case 422:
			return 468034421;
		
		case 423:
			return 1079459546;
		
		case 424:
			return -140369351;
		
		case 425:
			return 1822341990;
		
		case 426:
			return 1219701681;
		
		case 427:
			return 1601295268;
		
		case 428:
			return -1692460667;
		
		case 429:
			return 1471419228;
		
		case 430:
			return 907446160;
		
		case 431:
			return -1126482585;
		
		case 432:
			return 1911050315;
		
		case 433:
			return -1343525599;
		
		case 434:
			return 1261891225;
		
		case 435:
			return 763162704;
		
		case 436:
			return 1335861197;
		
		case 437:
			return 526744654;
		
		case 438:
			return -1177461517;
		
		case 439:
			return -241638635;
		
		case 440:
			return 1024262875;
		
		case 441:
			return 853355463;
		
		case 442:
			return -337288221;
		
		case 443:
			return 361381308;
		
		case 444:
			return -1264898804;
		
		case 445:
			return -585289073;
		
		case 446:
			return 1423542233;
		
		case 447:
			return -948489286;
		
		case 448:
			return 2063859257;
		
		case 449:
			return -1652627327;
		
		case 450:
			return -1959697839;
		
		case 451:
			return -1532267859;
		
		case 452:
			return -1410062763;
		
		case 453:
			return -901428716;
		
		case 454:
			return -1628873469;
		
		case 455:
			return 144855571;
		
		case 456:
			return -617589883;
		
		case 457:
			return -1306457086;
		
		case 458:
			return 1713542477;
		
		case 459:
			return -305542365;
		
		case 460:
			return 1985390213;
		
		case 461:
			return -2145069367;
		
		case 462:
			return -1674390752;
		
		case 463:
			return -2117214398;
		
		case 464:
			return 1880805647;
		
		case 465:
			return -62390436;
		
		case 466:
			return 1815288415;
		
		case 467:
			return 196214097;
		
		case 468:
			return -201958220;
		
		case 469:
			return 1400281261;
		
		case 470:
			return 1601515402;
		
		case 471:
			return -940704970;
		
		case 472:
			return -548371721;
		
		case 473:
			return -1022384613;
		
		case 474:
			return -357406394;
		
		case 475:
			return 1077068189;
		
		case 476:
			return -782241404;
		
		case 477:
			return 1669853467;
		
		case 478:
			return 1592019450;
		
		case 479:
			return 635273153;
		
		case 480:
			return -1559225678;
		
		case 481:
			return -266425508;
		
		case 482:
			return 1117400455;
		
		case 483:
			return 454332195;
		
		case 484:
			return -1328061889;
		
		case 485:
			return 561650932;
		
		case 486:
			return 256105670;
		
		case 487:
			return 1976779618;
		
		case 488:
			return -269095126;
		
		case 489:
			return 2145617267;
		
		case 490:
			return 1150213537;
		
		case 491:
			return 1598825281;
		
		case 492:
			return -712527121;
		
		case 493:
			return 1308553072;
		
		case 494:
			return 852866398;
		
		case 495:
			return -1794417972;
		
		case 496:
			return 293062146;
		
		case 497:
			return 95360094;
		
		case 498:
			return 807631773;
		
		case 499:
			return 1603958275;
		
		case 500:
			return 860052020;
		
		case 501:
			return -1885979781;
		
		case 502:
			return 746147970;
		
		case 503:
			return 666663006;
		
		case 504:
			return -2096186453;
		
		case 505:
			return 859409444;
		
		case 506:
			return -671427187;
		
		case 507:
			return 100192478;
		
		case 508:
			return 307812616;
		
		case 509:
			return 1670843243;
		
		case 510:
			return 899615863;
		
		case 511:
			return -298901850;
		
		case 512:
			return 1379186917;
		
		case 513:
			return -817206030;
		
		case 514:
			return -1150323212;
		
		case 515:
			return -247466821;
		
		case 516:
			return 427124242;
		
		case 517:
			return 855418120;
		
		case 518:
			return -777015093;
		
		case 519:
			return -722462870;
		
		case 520:
			return -937454324;
		
		case 521:
			return -339438116;
		
		case 522:
			return 2135639035;
		
		case 523:
			return 1254273765;
		
		case 524:
			return -792172668;
		
		case 525:
			return 1905987493;
		
		case 526:
			return 495693044;
		
		case 527:
			return -1693422950;
		
		case 528:
			return -205873076;
		
		case 529:
			return -2143114654;
		
		case 530:
			return -1420574021;
		
		case 531:
			return -1959250381;
		
		case 532:
			return -1088328663;
		
		case 533:
			return 513602003;
		
		case 534:
			return 359221401;
		
		case 535:
			return 1005272;
		
		case 536:
			return 1583044470;
		
		case 537:
			return 348853959;
		
		case 538:
			return 1045621973;
		
		case 539:
			return 1084576580;
		
		case 540:
			return 1651573695;
		
		case 541:
			return 1463321587;
		
		case 542:
			return -997505963;
		
		case 543:
			return -1649851713;
		
		case 544:
			return -386012962;
		
		case 545:
			return 1386101789;
		
		case 546:
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1360128126;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_596(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_685(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_597(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_686(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_598(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_659(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_687(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_599(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_688(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_684(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_600(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_687(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_600(bool bParam0)
{
	if (func_267() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_687(bParam0));
}

int func_601(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_689(iParam0))
	{
		return 0;
	}
	if (!func_600(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_602(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_420(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_603(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (((*Global_1888801)[iVar2 /*35*/])->f_20 == iParam0)
		{
			if (!(iParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_690(iVar2))
				{
					vVar3 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar2 /*35*/])->f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_604(int iParam0)
{
	if (func_117(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_605(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_606(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		
		case -2106214197:
			return 104;
		
		case -2101264851:
			return 195;
		
		case -2073072369:
			return 59;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 357;
		
		case -2058120606:
			return 197;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 92;
		
		case -2022369555:
			return 265;
		
		case -2021582629:
			return 112;
		
		case -2020023971:
			return 278;
		
		case -1957523409:
			return 208;
		
		case -1952856164:
			return 165;
		
		case -1949204933:
			return 276;
		
		case -1925798111:
			return 41;
		
		case -1861414976:
			return 353;
		
		case -1852605133:
			return 10;
		
		case -1847672446:
			return 376;
		
		case -1840704908:
			return 289;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 57;
		
		case -1835851517:
			return 56;
		
		case -1831552326:
			return 123;
		
		case -1825294305:
			return 266;
		
		case -1824738758:
			return 277;
		
		case -1818850842:
			return 253;
		
		case -1799960545:
			return 257;
		
		case -1764522338:
			return 372;
		
		case -1763509974:
			return 141;
		
		case -1741667789:
			return 64;
		
		case -1738165526:
			return 3;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 61;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 233;
		
		case -1700452710:
			return 53;
		
		case -1674179981:
			return 55;
		
		case -1666278201:
			return 33;
		
		case -1612662716:
			return 201;
		
		case -1610966108:
			return 322;
		
		case -1582926490:
			return 146;
		
		case -1579419919:
			return 147;
		
		case -1558439474:
			return 301;
		
		case -1556423728:
			return 218;
		
		case -1532284567:
			return 116;
		
		case -1530132748:
			return 311;
		
		case -1524512402:
			return 209;
		
		case -1523910291:
			return 155;
		
		case -1455998786:
			return 338;
		
		case -1447311849:
			return 215;
		
		case -1436021162:
			return 172;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 73;
		
		case -1405998267:
			return 105;
		
		case -1344601768:
			return 314;
		
		case -1340339190:
			return 331;
		
		case -1329135070:
			return 140;
		
		case -1318987693:
			return 222;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 320;
		
		case -1283202000:
			return 321;
		
		case -1282804314:
			return 270;
		
		case -1278074582:
			return 171;
		
		case -1271608261:
			return 98;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 300;
		
		case -1236261996:
			return 235;
		
		case -1232809834:
			return 113;
		
		case -1230112817:
			return 170;
		
		case -1223121209:
			return 126;
		
		case -1215445344:
			return 131;
		
		case -1209597203:
			return 333;
		
		case -1206122982:
			return 156;
		
		case -1187950766:
			return 45;
		
		case -1179948750:
			return 136;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 234;
		
		case -1151084372:
			return 124;
		
		case -1145519186:
			return 100;
		
		case -1124061431:
			return 242;
		
		case -1123615607:
			return 29;
		
		case -1080627546:
			return 378;
		
		case -1077783786:
			return 194;
		
		case -1063147448:
			return 151;
		
		case -1062490780:
			return 79;
		
		case -1060078174:
			return 239;
		
		case -1056767524:
			return 176;
		
		case -1053549743:
			return 58;
		
		case -1029225159:
			return 106;
		
		case -1014145132:
			return 288;
		
		case -978957786:
			return 251;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 152;
		
		case -939420910:
			return 44;
		
		case -939114198:
			return 221;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 336;
		
		case -897750037:
			return 334;
		
		case -895073533:
			return 356;
		
		case -879507474:
			return 236;
		
		case -868076593:
			return 84;
		
		case -857964358:
			return 83;
		
		case -853383233:
			return 65;
		
		case -851626677:
			return 339;
		
		case -828139293:
			return 260;
		
		case -811637947:
			return 245;
		
		case -796902762:
			return 88;
		
		case -792853067:
			return 254;
		
		case -789397228:
			return 262;
		
		case -785605431:
			return 250;
		
		case -781631220:
			return 345;
		
		case -764163380:
			return 228;
		
		case -748969569:
			return 78;
		
		case -741351766:
			return 60;
		
		case -736853952:
			return 366;
		
		case -734416508:
			return 340;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 323;
		
		case -683458244:
			return 80;
		
		case -666014935:
			return 157;
		
		case -664512648:
			return 67;
		
		case -664252410:
			return 191;
		
		case -644722288:
			return 261;
		
		case -640663440:
			return 214;
		
		case -639037538:
			return 185;
		
		case -628542779:
			return 71;
		
		case -622554983:
			return 370;
		
		case -618620429:
			return 187;
		
		case -545450213:
			return 377;
		
		case -538889627:
			return 175;
		
		case -538880323:
			return 174;
		
		case -534215902:
			return 130;
		
		case -524787708:
			return 352;
		
		case -524145696:
			return 117;
		
		case -523522517:
			return 364;
		
		case -515561750:
			return 238;
		
		case -503955743:
			return 249;
		
		case -502473159:
			return 343;
		
		case -502324015:
			return 8;
		
		case -491981251:
			return 186;
		
		case -468693731:
			return 111;
		
		case -464836488:
			return 268;
		
		case -460024530:
			return 316;
		
		case -434590080:
			return 225;
		
		case -404698347:
			return 205;
		
		case -397760715:
			return 143;
		
		case -389056691:
			return 272;
		
		case -360036154:
			return 368;
		
		case -356975260:
			return 103;
		
		case -355531636:
			return 337;
		
		case -351362068:
			return 220;
		
		case -350863510:
			return 162;
		
		case -349064220:
			return 362;
		
		case -334729750:
			return 69;
		
		case -333135263:
			return 361;
		
		case -330120947:
			return 360;
		
		case -306246697:
			return 375;
		
		case -299522880:
			return 213;
		
		case -270094635:
			return 267;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 244;
		
		case -254562075:
			return 132;
		
		case -238080464:
			return 121;
		
		case -233743613:
			return 273;
		
		case -223469678:
			return 204;
		
		case -220282381:
			return 139;
		
		case -191424539:
			return 149;
		
		case -182889087:
			return 177;
		
		case -154581735:
			return 309;
		
		case -150493654:
			return 97;
		
		case -144653976:
			return 219;
		
		case -129643890:
			return 11;
		
		case -108780030:
			return 317;
		
		case -108307814:
			return 28;
		
		case -99303535:
			return 167;
		
		case -86199844:
			return 145;
		
		case -80522843:
			return 154;
		
		case -76237062:
			return 373;
		
		case -75024673:
			return 258;
		
		case -63926460:
			return 89;
		
		case -61411516:
			return 325;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 290;
		
		case -9438024:
			return 129;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 153;
		
		case 8924991:
			return 297;
		
		case 26054262:
			return 248;
		
		case 26245360:
			return 237;
		
		case 38162571:
			return 74;
		
		case 52706132:
			return 243;
		
		case 54073871:
			return 76;
		
		case 74872959:
			return 348;
		
		case 93964309:
			return 358;
		
		case 94263042:
			return 291;
		
		case 106479759:
			return 101;
		
		case 141950038:
			return 114;
		
		case 153152452:
			return 86;
		
		case 168171957:
			return 183;
		
		case 171107021:
			return 381;
		
		case 171499483:
			return 283;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 241;
		
		case 210001842:
			return 62;
		
		case 224551212:
			return 142;
		
		case 227918160:
			return 182;
		
		case 229371495:
			return 344;
		
		case 235928616:
			return 286;
		
		case 249726958:
			return 164;
		
		case 269047710:
			return 54;
		
		case 273461605:
			return 81;
		
		case 280705402:
			return 95;
		
		case 282809459:
			return 119;
		
		case 299694527:
			return 275;
		
		case 300221584:
			return 138;
		
		case 302205488:
			return 216;
		
		case 311708813:
			return 198;
		
		case 320943355:
			return 133;
		
		case 330026330:
			return 66;
		
		case 345808947:
			return 287;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 281;
		
		case 373691918:
			return 188;
		
		case 374115931:
			return 90;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 173;
		
		case 409602249:
			return 293;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 303;
		
		case 420709909:
			return 42;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 199;
		
		case 439465264:
			return 108;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 302;
		
		case 449774763:
			return 227;
		
		case 459290420:
			return 52;
		
		case 469053995:
			return 231;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 232;
		
		case 478884033:
			return 148;
		
		case 479419429:
			return 305;
		
		case 509781469:
			return 350;
		
		case 514932331:
			return 246;
		
		case 522677506:
			return 279;
		
		case 526003171:
			return 355;
		
		case 527226204:
			return 159;
		
		case 544152906:
			return 115;
		
		case 559573222:
			return 252;
		
		case 582380806:
			return 326;
		
		case 588987611:
			return 179;
		
		case 618699440:
			return 77;
		
		case 630808005:
			return 128;
		
		case 651395116:
			return 294;
		
		case 657241756:
			return 189;
		
		case 664571177:
			return 312;
		
		case 665676602:
			return 296;
		
		case 682839815:
			return 327;
		
		case 689024866:
			return 134;
		
		case 689930684:
			return 207;
		
		case 704802028:
			return 178;
		
		case 723021499:
			return 264;
		
		case 747514327:
			return 354;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 109;
		
		case 784360470:
			return 330;
		
		case 791041526:
			return 18;
		
		case 817925178:
			return 240;
		
		case 868326136:
			return 285;
		
		case 885203519:
			return 379;
		
		case 885378256:
			return 351;
		
		case 929582877:
			return 335;
		
		case 931649776:
			return 224;
		
		case 932909855:
			return 298;
		
		case 945612176:
			return 247;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 310;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 122;
		
		case 1050128548:
			return 284;
		
		case 1064154891:
			return 110;
		
		case 1067254646:
			return 319;
		
		case 1074873669:
			return 144;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 256;
		
		case 1159471771:
			return 329;
		
		case 1160698568:
			return 135;
		
		case 1164928979:
			return 158;
		
		case 1166612791:
			return 347;
		
		case 1167397384:
			return 307;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 230;
		
		case 1193080109:
			return 184;
		
		case 1203043430:
			return 274;
		
		case 1205826474:
			return 85;
		
		case 1207048789:
			return 169;
		
		case 1213993593:
			return 160;
		
		case 1216784232:
			return 269;
		
		case 1221801385:
			return 374;
		
		case 1238086793:
			return 313;
		
		case 1250636944:
			return 259;
		
		case 1302228510:
			return 315;
		
		case 1306158345:
			return 202;
		
		case 1321892118:
			return 324;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 75;
		
		case 1352699670:
			return 271;
		
		case 1358491857:
			return 263;
		
		case 1360745816:
			return 82;
		
		case 1376646519:
			return 223;
		
		case 1399676951:
			return 210;
		
		case 1410198831:
			return 217;
		
		case 1433244935:
			return 166;
		
		case 1441416901:
			return 211;
		
		case 1446719356:
			return 380;
		
		case 1453909576:
			return 125;
		
		case 1466547629:
			return 120;
		
		case 1478132521:
			return 367;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 102;
		
		case 1488286867:
			return 295;
		
		case 1488453464:
			return 212;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 72;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 168;
		
		case 1517904467:
			return 206;
		
		case 1522511407:
			return 280;
		
		case 1549124796:
			return 342;
		
		case 1557082963:
			return 163;
		
		case 1582370975:
			return 359;
		
		case 1583012985:
			return 304;
		
		case 1591451572:
			return 365;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 107;
		
		case 1626481264:
			return 118;
		
		case 1643531967:
			return 127;
		
		case 1649996811:
			return 181;
		
		case 1660024373:
			return 150;
		
		case 1665756137:
			return 93;
		
		case 1672143046:
			return 383;
		
		case 1691618738:
			return 68;
		
		case 1698972798:
			return 318;
		
		case 1703398561:
			return 332;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 346;
		
		case 1713221411:
			return 137;
		
		case 1743048395:
			return 226;
		
		case 1744443559:
			return 349;
		
		case 1766284049:
			return 94;
		
		case 1776302352:
			return 363;
		
		case 1804403874:
			return 382;
		
		case 1822001510:
			return 200;
		
		case 1846061697:
			return 99;
		
		case 1850082804:
			return 196;
		
		case 1867912207:
			return 70;
		
		case 1884271742:
			return 51;
		
		case 1926308480:
			return 96;
		
		case 1932172605:
			return 328;
		
		case 1944170089:
			return 161;
		
		case 1947931439:
			return 229;
		
		case 1952610440:
			return 203;
		
		case 1954026328:
			return 371;
		
		case 1982676972:
			return 91;
		
		case 2008888900:
			return 180;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 190;
		
		case 2024121624:
			return 193;
		
		case 2024383613:
			return 369;
		
		case 2024769126:
			return 308;
		
		case 2037589949:
			return 63;
		
		case 2051822093:
			return 299;
		
		case 2077022393:
			return 306;
		
		case 2080210939:
			return 282;
		
		case 2091701359:
			return 39;
		
		case 2109952320:
			return 192;
		
		case 2113625508:
			return 341;
		
		case 2127577956:
			return 255;
		
		case 2136753624:
			return 87;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_607(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_608(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_609(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_610(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

int func_611()
{
	if (func_691())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return PAD::IS_CONTROL_PRESSED(0, 130948705);
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_612(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_613(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -171675621))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_614(var uParam0)
{
	int iVar0;
	
	if (Global_1935630->f_38 == 0)
	{
		func_268(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_51(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_615(int iParam0, int iParam1)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_616(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_617(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_617(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_618(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_619(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_620(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_621(int iParam0, bool bParam1)
{
	switch (func_692(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_622(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_693((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_623(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_640((*uParam0)[iVar0 /*17*/]))
		{
			func_309((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_624(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_694(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_253(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_309((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_625(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_256(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		
		case 1:
			iVar1 = 768137552;
			break;
		
		case 0:
			iVar1 = 1415388528;
			break;
		
		case 4:
			iVar1 = 1449436544;
			break;
		
		case 3:
			iVar1 = -1807204482;
			break;
		
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_626(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_627(int* iParam0, int* iParam1)
{
	if (!func_536(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_309(iParam1, 19);
			func_642(iParam0, 23);
			func_695(iParam1, 2);
		}
	}
}

int func_628(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_696(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_697(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_629(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_694(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_630(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_631(int iParam0)
{
	return (func_698(iParam0, 4) || func_698(iParam0, 5));
}

int func_632(int iParam0)
{
	return func_698(iParam0, 7);
}

int func_633(int iParam0)
{
	return func_698(iParam0, 6);
}

void func_634(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_640(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_694(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_635(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_699(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_700(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_307(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_307(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_701(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_636(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_702(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_703(iParam1, 1))
	{
		func_704(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_637(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_130((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_638(int* iParam0, float fParam1, var uParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (uParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_639(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_640(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_642(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_643(var uParam0, float fParam1)
{
	if (func_375(uParam0, fParam1))
	{
		func_376(uParam0);
		return 1;
	}
	return 0;
}

int func_644(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_645(int iParam0, int iParam1)
{
	if (func_267() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_646(int iParam0)
{
	if (func_267() != -1)
	{
		if (func_648(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_648(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_647(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_648(iParam0, 65536) && !func_648(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_648(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_648(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_648(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_649(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_650()
{
	return Global_1905944->f_5694;
}

var func_651()
{
	return Global_40.f_11095.f_35;
}

int func_652(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_654(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_705(bParam1);
	}
}

void func_655(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_656(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_657(var uParam0)
{
	vector3 vVar0;
	
	if (!func_706(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*uParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_658(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_706(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_659(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_660(int iParam0)
{
	return iParam0;
}

int func_661(int iParam0)
{
	vector3 vVar0;
	
	if (!func_659(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_662()
{
	int iVar0;
	
	iVar0 = func_551();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		
		case 240:
		case 280:
		case 320:
			return -2132502231;
		
		default:
			break;
	}
	return -1130204298;
}

void func_663(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_664(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_665(int iParam0, var uParam1, var uParam2)
{
	if (!func_664(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		
		default:
			return 0;
	}
	return 1;
}

var func_666(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_667(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_668(int iParam0)
{
	if (!func_707(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_669(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_708(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_670()
{
	return &Global_1899515;
}

void func_671(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_709(*uParam0);
	iVar1 = func_710(*uParam0);
	iVar2 = func_711(*uParam0);
	iVar3 = func_356(*uParam0);
	iVar4 = func_712(*uParam0);
	iVar5 = func_713(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_714(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_714(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_715(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_672(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case joaat("cs_clay"):
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_674(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_716(iParam0, iParam1))
		{
			if (func_717(iParam0, iParam1))
			{
				if (func_718(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_719(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_675(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_676(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_677(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

struct<4> func_678(bool bParam0)
{
	return func_598(1328661203, func_720(), -1591664384, bParam0);
}

struct<4> func_679(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_687(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_598(923904168, func_678(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_598(923904168, func_678(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_598(923904168, func_678(bParam0), -740156546, 0);
}

int func_680(int iParam0, bool bParam1)
{
	if (func_682(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_721(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_681(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_687(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_598(271701509, func_678(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_598(271701509, func_678(bParam0), 12999093, 0);
}

int func_682(int iParam0)
{
	struct<2> Var0;
	
	if (!func_659(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_683(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_682(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_684(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_687(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_685(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	
	if (!func_659(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_598(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_687(bParam6), &Var0, 0);
	return uVar4;
}

int func_686(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_687(0);
	*uParam1 = { func_598(iParam0, func_679(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_687(bool bParam0)
{
	if (func_267() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_688(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_689(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

bool func_690(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_691()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_692(int iParam0)
{
	if (!func_369(iParam0))
	{
		return -1;
	}
	return func_722(iParam0);
}

int func_693(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_694(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;
	
	if (func_253(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_251(&(iParam1->f_6), 0, 1);
	}
	if (!func_253(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_640(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_723(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_253(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_701(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_724(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_725(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_305(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_724(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_307(iParam1->f_6, 0, 1);
				}
				else
				{
					func_307(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_695(int* iParam0, int iParam1)
{
	if (!func_308(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_309(iParam0, 14);
		}
	}
}

bool func_696(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_697(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_698(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_699(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			iVar1 = 0;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					iVar1 = 1;
				}
			}
			if (!bParam7)
			{
				if (uParam8 || iVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_700(int iParam0, int iParam1)
{
	if (iParam1 && !func_253(iParam0))
	{
		return false;
	}
	return !func_590(iParam0, 4);
}

void func_701(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam3 && !func_253(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_437(iParam0);
	func_724(iParam0, 18, 0, 1);
	func_724(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_702(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_253(iParam0))
	{
		return false;
	}
	iVar0 = func_437(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_703(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_253(iParam0))
	{
		return false;
	}
	iVar0 = func_437(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_704(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_253(iParam0))
	{
		return;
	}
	iVar0 = func_437(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_705(bool bParam0)
{
	func_726(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_706(int iParam0, var uParam1)
{
	if (!func_727(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_707(int iParam0)
{
	return iParam0 > -1;
}

int func_708(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

var func_709(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_568(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_710(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_711(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_712(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_713(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_714(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		
		default:
			break;
	}
	return 30;
}

void func_715(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_728(uParam0, iParam6);
	func_729(uParam0, iParam5);
	func_730(uParam0, iParam4);
	func_731(uParam0, iParam3);
	func_732(uParam0, iParam2);
	func_733(uParam0, iParam1);
}

bool func_716(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_717(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_718(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_716(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_719(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_720()
{
	struct<4> Var0;
	
	return Var0;
}

int func_721(int iParam0, bool bParam1)
{
	if (func_689(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_687(bParam1), iParam0, 0);
}

int func_722(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_734(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_723(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_590(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_735(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_724(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_253(iParam0))
	{
		return;
	}
	iVar0 = func_437(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_725(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 && !func_253(iParam0))
	{
		return;
	}
	iVar0 = func_437(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_726(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_727(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_728(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_729(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_730(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_710(*uParam0);
	iVar1 = func_709(*uParam0);
	if (iParam1 < 1 || iParam1 > func_714(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_731(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_732(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_733(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_734(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

void func_735(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, var uParam15, var uParam16, int iParam17, var uParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	
	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, uParam16);
			break;
		
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, uParam16, uParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, uParam16, iParam17);
			break;
		
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_456(iParam0, 1);
	func_457(iParam0, 1);
	func_458(iParam0, 128);
}
