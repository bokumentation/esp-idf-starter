idf_component_register(
    SRCS "components_example.cpp"
    INCLUDE_DIRS "include"
    PRIV_REQUIRES freertos esp_driver_gpio
)
