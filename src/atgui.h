#pragma once

#include "UI/stdui.h"

#include "PANELS/aimbot_panel.h"
#include "PANELS/triggerbot_panel.h"
#include "PANELS/visuals_panel.h"
#include "PANELS/hvh_panel.h"
#include "PANELS/misc_panel.h"
#include "WINDOWS/config_window.h"
#include "WINDOWS/main_window.h"
#include "WINDOWS/popup_window.h"
#include "WINDOWS/skinchange_window.h"
#include "PANELS/knifeskin_panel.h"
#include "PANELS/weaponskin_panel.h"

extern MainWindow* main_window;
extern ConfigWindow* config_window;
extern SkinChangerWindow* skinchange_window;

void SetupUI();
