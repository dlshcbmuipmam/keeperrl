#pragma once

#include "util.h"
#include "special_trait.h"
#include "tech_id.h"

struct KeeperCreatureInfo {
  vector<CreatureId> SERIAL(creatureId);
  TribeAlignment SERIAL(tribeAlignment);
  vector<string> SERIAL(immigrantGroups);
  vector<TechId> SERIAL(technology);
  vector<TechId> SERIAL(initialTech);
  vector<string> SERIAL(buildingGroups);
  vector<string> SERIAL(workshopGroups);
  string SERIAL(description);
  vector<SpecialTrait> SERIAL(specialTraits);
  template <class Archive>
  void serialize(Archive& ar, const unsigned int) {
    ar(NAMED(creatureId), NAMED(tribeAlignment), NAMED(immigrantGroups), NAMED(technology), NAMED(initialTech), NAMED(buildingGroups));
    ar(NAMED(workshopGroups), NAMED(description), OPTION(specialTraits));
  }
};
