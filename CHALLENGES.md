# The Forgotten Crypt — Challenge #001

A text-based dungeon crawler written in C for the Windows terminal.

**Start:** 27/10/2026  
**Deadline:** 28/11/2026  
**Victory:** Defeat the Crypt Guardian.  
**Defeat:** Player health reaches zero.

## Technical Requirements

- [ ] Write the game in C, not C++.
- [ ] Use only the C standard library.
- [ ] Compile into a native Windows executable.
- [ ] Use text-based input and output; graphics are not required.
- [ ] Maintain game state internally throughout the session.
- [ ] Accept real player commands rather than running automatic actions.
- [ ] Initialize all state and handle input safely.
- [ ] Separate responsibilities into meaningful functions.
- [ ] Keep the code understandable and maintainable.

## Dungeon

| Room | Exits | Initial Contents |
|---|---|---|
| Entrance | North → Hall | Player starts here |
| Hall | South → Entrance, West → Armory, East → Shrine, North → Sanctum | Skeleton |
| Armory | East → Hall | Iron Sword, Bronze Key |
| Shrine | West → Hall | Healing Potion |
| Sanctum | South → Hall | Crypt Guardian |

- [ ] Give every room a unique description.
- [ ] Allow movement only through valid exits.
- [ ] Allow revisiting rooms.
- [ ] Require the Bronze Key to enter the Sanctum.
- [ ] Prevent leaving a room while its enemy is alive.
- [ ] Keep defeated enemies permanently defeated.

## Player

- [ ] Start at the Entrance.
- [ ] Start with 100 HP and a maximum of 100 HP.
- [ ] Start with 10 attack damage.
- [ ] Start with an empty inventory and no equipped weapon.
- [ ] Keep health between 0 and 100.
- [ ] Allow health, weapon, attack damage, and inventory inspection.

## Combat

| Enemy | Health | Attack Damage | Location |
|---|---|---|---|
| Skeleton | 30 HP | 10 | Hall |
| Crypt Guardian | 80 HP | 30 | Sanctum |

- [ ] Use turn-based combat.
- [ ] Let the player attack first.
- [ ] Reduce enemy HP on each successful attack.
- [ ] Make a surviving enemy immediately counterattack.
- [ ] Prevent counterattacks after a killing blow.
- [ ] Prevent defeated enemies from attacking again.
- [ ] Make successful potion use during combat consume a turn and trigger a counterattack.
- [ ] Keep informational commands free of combat turns.
- [ ] Prevent fleeing from an active encounter.
- [ ] Display damage dealt and remaining health.
- [ ] End the game immediately when player HP reaches zero.

## Items and Inventory

### Iron Sword

- [ ] Place it in the Armory.
- [ ] Allow collection only once and only in that room.
- [ ] Automatically equip it when collected.
- [ ] Permanently increase attack damage from 10 to 20.
- [ ] Prevent repeated collection from stacking damage.

### Bronze Key

- [ ] Place it in the Armory.
- [ ] Allow collection only once and only in that room.
- [ ] Allow entry into the Sanctum when held.
- [ ] Keep it in inventory after unlocking the entrance.

### Healing Potion

- [ ] Place it in the Shrine.
- [ ] Allow collection only once and only in that room.
- [ ] Restore 40 HP without exceeding 100 HP.
- [ ] Consume it after one successful use.
- [ ] Reject use when player health is already full.
- [ ] Preserve the potion when use is rejected.

### Inventory Consistency

- [ ] Remove collected items from their rooms.
- [ ] Prevent duplicate collection.
- [ ] Accurately show collected and consumed items.
- [ ] Allow inventory inspection during exploration and combat.

## Commands

- [ ] `look` — Describe the room, exits, living enemies, and available items.
- [ ] `go north` — Move north when permitted.
- [ ] `go south` — Move south when permitted.
- [ ] `go east` — Move east when permitted.
- [ ] `go west` — Move west when permitted.
- [ ] `attack` — Attack the current living enemy.
- [ ] `take sword` — Collect the Iron Sword.
- [ ] `take key` — Collect the Bronze Key.
- [ ] `take potion` — Collect the Healing Potion.
- [ ] `use potion` — Consume a potion when permitted.
- [ ] `inventory` — Show inventory contents.
- [ ] `status` — Show player attributes.
- [ ] `help` — Show available commands.
- [ ] `quit` — Exit cleanly.

## Input and Invalid Actions

- [ ] Support lowercase commands; case-insensitive input is optional.
- [ ] Display an error for unknown commands.
- [ ] Reject invalid actions without changing game state.
- [ ] Prevent invalid actions from triggering enemy attacks.
- [ ] Handle empty input without crashing or quitting.
- [ ] Handle overly long input safely.
- [ ] Handle end-of-input cleanly.
- [ ] Continue accepting commands until victory, defeat, or quitting.

## Game Events

- [ ] Game start: display title, opening narrative, and starting room.
- [ ] Room entry: display room name and description.
- [ ] Locked door: explain that the Bronze Key is required.
- [ ] Enemy encounter: introduce the enemy and indicate active combat.
- [ ] Item collection: confirm collection.
- [ ] Combat: show attacks, damage, and remaining HP.
- [ ] Enemy defeat: announce defeat and permanently remove the enemy.
- [ ] Player death: show defeat and terminate immediately.
- [ ] Guardian defeat: show victory and terminate immediately.
- [ ] Quit: terminate cleanly.

## Final Acceptance

- [ ] Compile and run successfully in a Windows terminal.
- [ ] Explore all five rooms according to their rules.
- [ ] Complete an entire winning playthrough using terminal commands.
- [ ] Demonstrate a losing playthrough.
- [ ] Verify clean quitting.
- [ ] Verify item collection, consumption, and inventory consistency.
- [ ] Verify the Sanctum cannot be entered without the key.
- [ ] Verify defeated enemies never respawn.
- [ ] Verify invalid input and actions cannot corrupt state or crash the game.
- [ ] Explain state representation, command handling, combat, items, and endings.

## Optional Challenges

These do not block completion.

- [ ] Explorer: add a map showing only discovered rooms.
- [ ] Dungeon Master: add randomized damage, critical hits, and dodges.
- [ ] Archivist: implement save/load for player and dungeon state.
- [ ] Architect: load room and enemy definitions from external configuration.
- [ ] Machine Whisperer: inspect structures in a debugger and compare generated Assembly with and without optimization.