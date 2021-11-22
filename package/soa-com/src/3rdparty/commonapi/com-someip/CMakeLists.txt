
project(com-someip)

set(CAPI_FIDLS
	${CAPI_FIDL_DIR}/ComTypes.fidl
    ${CAPI_FIDL_DIR}/ControllerServer.fidl
	${CAPI_FIDL_DIR}/ListenerServer.fidl
	)

set(CAPI_LIB_NAME "com-someip")

include("CAPI-GenerateSomeIPBinding.cmake")
