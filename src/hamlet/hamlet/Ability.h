#ifndef ABILITY_H
#define ABILITY_H

#include "Root.h"

/* This class is not linked into the game yet. */

namespace godot {
	class Ability : public Object {
		GODOT_CLASS(Ability, Object) 

	protected:
		int iCooldown;
		int iCountdown;

	public:
		bool isDisabled = false;

		void _register_methods();

		void _init();
		void _ready();
		void _fixed_process(float delta);

		Ability();
		~Ability();

		void StartCooldown();
		int GetCooldown();
		int GetRemainingCooldown();
	};
}

#endif //!ABILITY_H