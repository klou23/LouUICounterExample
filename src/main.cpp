#include "main.h"
#include "UIVars.hpp"
#include "LouUI/Button.hpp"
#include "LouUI/Label.hpp"
#include "UIFuncs.hpp"

void initialize() {
    display.addScreen("Example LouUI Screen");

    button = (new LouUI::Button(display.getScreen("Example LouUI Screen")))
            ->setSize(150, 50)
            ->align(display.getScreen("Example LouUI Screen"), LouUI::IN_TOP_MID);
    label = (new LouUI::Label(display.getScreen("Example LouUI Screen")))
            ->setText("Counter: 0")
            ->align(button->getObj(), LouUI::OUT_BOTTOM_MID, 0, 15);

    buttonLabel = (new LouUI::Label(button->getObj()))
            ->setText("Click Me!");

    button->setAction(incrementCounter);
}

void disabled() {}

void competition_initialize() {}

void autonomous() {}

void opcontrol() {}
