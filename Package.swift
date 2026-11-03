// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "UnitComponents",
    platforms: [
        .iOS("16.4")
    ],
    products: [
        .library(name: "UnitComponents", targets: ["UNComponentsSDKWrapperTarget"])
    ],
    dependencies: [
        .package(url: "https://github.com/unit-finance/unit-ios-sdk", from: "1.2.0")
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
                .product(name: "UnitCommon", package: "unit-ios-sdk"),
            ],
            path: "UNComponentsSDKWrapperTarget"
        )
    ]
)
