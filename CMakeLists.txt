# CMakeList.txt: progetto CMake per Property. Includere l'origine e definire
# qui la logica specifica del progetto.
#

# Aggiungere l'origine all'eseguibile di questo progetto.
add_executable (Main "main.cpp")

add_library (Player "Player.h" "Player.cpp")
add_library (Property "Property.h" "Property.cpp")

target_link_libraries (Main Player Property)
