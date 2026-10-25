#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Minimal SDK/bootstrap check. The floating button, console, and command
// registry will be added in the next implementation step.
class $modify(GDBotAIMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        log::info("GD Bot AI loaded (Geode SDK 5.11.2 target).");
        return true;
    }
};
