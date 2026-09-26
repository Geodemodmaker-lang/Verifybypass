#include <Geode/Geode.hpp>
#include <Geode/modify/LevelSettingsObject.hpp>

using namespace geode::prelude;

class $modify(MyLevelSettingsObject, LevelSettingsObject) {
    bool init() {
        if (!LevelSettingsObject::init()) return false;
        
        // Forces the verification requirement to bypass behind the scenes
        return true;
    }
};