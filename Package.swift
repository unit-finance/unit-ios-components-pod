// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "UnitComponents",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(name: "UnitComponents", targets: ["UNComponentsSDKWrapperTarget"])
    ],
    dependencies: [
        // Here we define our package's external dependencies
        // and from where they can be fetched:
    ],
    targets: [
        .binaryTarget(
            name: "UnitComponents",
            path: "UNComponents.xcframework"
        ),
        .target(
            name: "UNComponentsSDKWrapperTarget",
            dependencies: [
                .target(name: "UnitComponents", condition: .when(platforms: .some([.iOS]))),
            ],
            path: "UNComponentsSDKWrapperTarget"
        )
    ]
)
