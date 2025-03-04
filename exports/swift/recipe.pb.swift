// DO NOT EDIT.
// swift-format-ignore-file
// swiftlint:disable all
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: recipe.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
fileprivate struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
  struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
  typealias Version = _2
}

struct Recipe_Ingredience: Sendable {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var amount: Float = 0

  var name: String = String()

  var unit: String = String()

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

struct Recipe_Recipe: Sendable {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  var portions: UInt32 = 0

  var activeTime: UInt32 = 0

  var passiveTime: UInt32 = 0

  var ingrediences: [Recipe_Ingredience] = []

  var instructions: [String] = []

  var unknownFields = SwiftProtobuf.UnknownStorage()

  init() {}
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "recipe"

extension Recipe_Ingredience: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Ingredience"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "amount"),
    2: .same(proto: "name"),
    3: .same(proto: "unit"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularFloatField(value: &self.amount) }()
      case 2: try { try decoder.decodeSingularStringField(value: &self.name) }()
      case 3: try { try decoder.decodeSingularStringField(value: &self.unit) }()
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if self.amount.bitPattern != 0 {
      try visitor.visitSingularFloatField(value: self.amount, fieldNumber: 1)
    }
    if !self.name.isEmpty {
      try visitor.visitSingularStringField(value: self.name, fieldNumber: 2)
    }
    if !self.unit.isEmpty {
      try visitor.visitSingularStringField(value: self.unit, fieldNumber: 3)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Recipe_Ingredience, rhs: Recipe_Ingredience) -> Bool {
    if lhs.amount != rhs.amount {return false}
    if lhs.name != rhs.name {return false}
    if lhs.unit != rhs.unit {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Recipe_Recipe: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  static let protoMessageName: String = _protobuf_package + ".Recipe"
  static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "portions"),
    2: .standard(proto: "active_time"),
    3: .standard(proto: "passive_time"),
    4: .same(proto: "ingrediences"),
    5: .same(proto: "instructions"),
  ]

  mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularUInt32Field(value: &self.portions) }()
      case 2: try { try decoder.decodeSingularUInt32Field(value: &self.activeTime) }()
      case 3: try { try decoder.decodeSingularUInt32Field(value: &self.passiveTime) }()
      case 4: try { try decoder.decodeRepeatedMessageField(value: &self.ingrediences) }()
      case 5: try { try decoder.decodeRepeatedStringField(value: &self.instructions) }()
      default: break
      }
    }
  }

  func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if self.portions != 0 {
      try visitor.visitSingularUInt32Field(value: self.portions, fieldNumber: 1)
    }
    if self.activeTime != 0 {
      try visitor.visitSingularUInt32Field(value: self.activeTime, fieldNumber: 2)
    }
    if self.passiveTime != 0 {
      try visitor.visitSingularUInt32Field(value: self.passiveTime, fieldNumber: 3)
    }
    if !self.ingrediences.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.ingrediences, fieldNumber: 4)
    }
    if !self.instructions.isEmpty {
      try visitor.visitRepeatedStringField(value: self.instructions, fieldNumber: 5)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  static func ==(lhs: Recipe_Recipe, rhs: Recipe_Recipe) -> Bool {
    if lhs.portions != rhs.portions {return false}
    if lhs.activeTime != rhs.activeTime {return false}
    if lhs.passiveTime != rhs.passiveTime {return false}
    if lhs.ingrediences != rhs.ingrediences {return false}
    if lhs.instructions != rhs.instructions {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
