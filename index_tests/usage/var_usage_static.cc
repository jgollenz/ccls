static int a;

void foo() {
  a = 3;
}

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "usr2func": [{
      "usr": 4259594751088586730,
      "detailed_name": "void foo()",
      "qual_name_offset": 5,
      "short_name": "foo",
      "kind": 12,
      "storage": 1,
      "declarations": [],
      "spell": "3:6-3:9|0|1|2",
      "extent": "3:1-5:2|0|1|0",
      "declaring_type": 0,
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": []
    }],
  "usr2type": [{
      "usr": 17,
      "detailed_name": "",
      "qual_name_offset": 0,
      "short_name": "",
      "kind": 0,
      "declarations": [],
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [11823161916242867318],
      "uses": []
    }],
  "usr2var": [{
      "usr": 11823161916242867318,
      "detailed_name": "int a",
      "qual_name_offset": 4,
      "short_name": "a",
      "declarations": [],
      "spell": "1:12-1:13|0|1|2",
      "extent": "1:1-1:13|0|1|0",
      "type": 17,
      "uses": ["4:3-4:4|4259594751088586730|3|4"],
      "kind": 13,
      "storage": 3
    }]
}
*/
