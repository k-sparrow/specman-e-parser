load("@rules_python//python/entry_points:py_console_script_binary.bzl", "py_console_script_binary")
load("@aspect_rules_py//py:defs.bzl", aspect_py_binary = "py_binary")
load("@pip//:requirements.bzl", "requirement")

# definition of metal (containerless) uvicorn development server
def uvicorn_dev_server(*, name, **kwargs):
    py_console_script_binary(
        name = name,
        pkg = "@pip//uvicorn",
        script = "uvicorn",
        deps = [
            requirement("uvicorn"),
            requirement("starlette"),
        ] + kwargs.pop("deps", []),
        binary_rule = aspect_py_binary, # fits better with rules_oci
        **kwargs
    )