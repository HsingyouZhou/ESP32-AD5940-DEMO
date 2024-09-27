idf_component_register(SRCS "BodyImpedance.c" "ad5940.c" "ESP32Port.c"
                    INCLUDE_DIRS "include"
                    REQUIRES driver esp_timer)
set_target_properties(${COMPONENT_LIB} PROPERTIES COMPILE_FLAGS "-Wno-maybe-uninitialized -Wno-overflow")