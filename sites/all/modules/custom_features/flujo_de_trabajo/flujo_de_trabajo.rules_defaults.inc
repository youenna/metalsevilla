<?php
/**
 * @file
 * flujo_de_trabajo.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function flujo_de_trabajo_default_rules_configuration() {
  $items = array();
  $items['rules_asignacion_de_establecimiento_a_gestor'] = entity_import('rules_config', '{ "rules_asignacion_de_establecimiento_a_gestor" : {
      "LABEL" : "Asignaci\\u00f3n de establecimiento a Gestor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules", "profile2" ],
      "ON" : { "profile2_insert" : [], "profile2_update" : [] },
      "IF" : [
        { "AND" : [
            { "NOT user_has_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "3" : "3" } } } },
            { "data_is" : { "data" : [ "profile2:type" ], "value" : "gestor" } }
          ]
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "profile2:field-local-gestor" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : [ "list-item:author:mail" ],
                  "subject" : "Asignaci\\u00f3n de Gestor del establecimiento [list-item:title]",
                  "message" : "Buenas [list-item:author]!\\r\\nEl nuevo usuario que gestionar\\u00e1 el establecimiento [list-item:title] es [profile2:user], si no es correcto p\\u00f3ngase en contacto con nosotros a trav\\u00e9s de [site:mail] lo antes posible.\\r\\n\\r\\nUn saludo,\\r\\n\\r\\n[site:url]",
                  "language" : [ "" ]
                }
              },
              { "data_set" : { "data" : [ "list-item:author" ], "value" : [ "profile2:user" ] } },
              { "workflow_rules_set_state" : {
                  "node" : [ "list-item" ],
                  "workflow_state" : { "value" : { "24" : "24" } }
                }
              },
              { "node_unpublish" : { "node" : [ "list-item" ] } },
              { "redirect" : { "url" : "[list-item:edit-url]" } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_asignacion_de_grupo_a_manager'] = entity_import('rules_config', '{ "rules_asignacion_de_grupo_a_manager" : {
      "LABEL" : "Asignaci\\u00f3n de grupo a M\\u00e1nager",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules", "profile2" ],
      "ON" : { "profile2_insert" : [], "profile2_update" : [] },
      "IF" : [
        { "AND" : [
            { "NOT user_has_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "3" : "3" } } } },
            { "data_is" : { "data" : [ "profile2:type" ], "value" : "manager" } }
          ]
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "profile2:field-manager-group" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : [ "list-item:author:mail" ],
                  "subject" : "Asignaci\\u00f3n de M\\u00e1nager del grupo [list-item:title]",
                  "message" : "Hola [list-item:author]!\\r\\nEl nuevo usuario que gestionar\\u00e1 el grupo o artista [list-item:title] es [profile2:user], si no es correcto p\\u00f3ngase en contacto con nosotros a trav\\u00e9s de [site:mail] lo antes posible.\\r\\n\\r\\nUn saludo,\\r\\n\\r\\n[site:url]",
                  "language" : [ "" ]
                }
              },
              { "data_set" : { "data" : [ "list-item:author" ], "value" : [ "profile2:user" ] } },
              { "workflow_rules_set_state" : {
                  "node" : [ "list-item" ],
                  "workflow_state" : { "value" : { "20" : "20" } }
                }
              },
              { "node_unpublish" : { "node" : [ "list-item" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_asignacion_rol_gestor'] = entity_import('rules_config', '{ "rules_asignacion_rol_gestor" : {
      "LABEL" : "Asignacion rol gestor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_insert" : [], "profile2_update" : [] },
      "IF" : [
        { "AND" : [
            { "NOT user_has_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "3" : "3" } } } },
            { "data_is" : { "data" : [ "profile2:type" ], "value" : "gestor" } }
          ]
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_asignacion_rol_m_sico'] = entity_import('rules_config', '{ "rules_asignacion_rol_m_sico" : {
      "LABEL" : "Asignacion rol m\\u00fasico",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_insert" : [], "profile2_update" : [] },
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "3" : "3" } } } },
        { "AND" : [] },
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "musico" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  $items['rules_asignacion_rol_manager'] = entity_import('rules_config', '{ "rules_asignacion_rol_manager" : {
      "LABEL" : "Asignacion rol manager",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_insert" : [], "profile2_update" : [] },
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "3" : "3" } } } },
        { "AND" : [] },
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "manager" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  $items['rules_despublicaci_n_de_contenido'] = entity_import('rules_config', '{ "rules_despublicaci_n_de_contenido" : {
      "LABEL" : "Despublicaci\\u00f3n de contenido",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "workflow_rules", "rules" ],
      "ON" : { "workflow_state_changed" : [] },
      "IF" : [
        { "workflow_check_state" : {
            "node" : [ "node" ],
            "workflow_state" : { "value" : {
                "2" : "2",
                "4" : "4",
                "6" : "6",
                "8" : "8",
                "10" : "10",
                "14" : "14",
                "12" : "12",
                "16" : "16",
                "18" : "18",
                "22" : "22",
                "24" : "24",
                "26" : "26"
              }
            }
          }
        }
      ],
      "DO" : [ { "node_unpublish" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_notificacion_publicacion_de_contenido'] = entity_import('rules_config', '{ "rules_notificacion_publicacion_de_contenido" : {
      "LABEL" : "Notificaci\\u00f3n publicaci\\u00f3n de contenido",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "AND" : [
            { "node_is_published" : { "node" : [ "node" ] } },
            { "NOT data_is_empty" : { "data" : [ "node:author:profile-main:field-notification" ] } }
          ]
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "[Contenido] [node:title] ha sido publicado",
            "message" : "El contenido [node:title] ha sido publicado, puedes visitarlo en [node:url]\\r\\n\\r\\n[site:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_publicaci_n_de_establecimiento'] = entity_import('rules_config', '{ "rules_publicaci_n_de_establecimiento" : {
      "LABEL" : "Publicaci\\u00f3n de establecimiento",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workflow_rules", "rules" ],
      "ON" : { "workflow_state_changed" : [] },
      "IF" : [
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "ANY" : "ANY" } },
            "new_state" : { "value" : { "25" : "25" } }
          }
        }
      ],
      "DO" : [
        { "node_publish" : { "node" : [ "node" ] } },
        { "mail" : {
            "to" : "[node:author]",
            "subject" : "[Gestor] El establecimiento [node:title] ha sido publicado",
            "message" : "El establecimiento [node:title] ha sido publicado, puedes verlo en [node:url].\\r\\n\\r\\n[site:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_publicacion_de_grupo'] = entity_import('rules_config', '{ "rules_publicacion_de_grupo" : {
      "LABEL" : "Publicaci\\u00f3n de grupo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workflow_rules", "rules" ],
      "ON" : { "workflow_state_changed" : [] },
      "IF" : [
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "ANY" : "ANY" } },
            "new_state" : { "value" : { "21" : "21" } }
          }
        }
      ],
      "DO" : [
        { "node_publish" : { "node" : [ "node" ] } },
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "[Manager] El grupo [node:title] ha sido publicado",
            "message" : "El grupo [node:title] ha sido publicado, puedes verlo en [node:url]\\r\\n\\r\\n[site:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_publicacion_de_grupo_old'] = entity_import('rules_config', '{ "rules_publicacion_de_grupo_old" : {
      "LABEL" : "Publicaci\\u00f3n de grupoOLD",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "workflow_rules", "rules" ],
      "ON" : { "workflow_state_changed" : [] },
      "IF" : [
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "ANY" : "ANY" } },
            "new_state" : { "value" : { "21" : "21" } }
          }
        }
      ],
      "DO" : [
        { "node_publish" : { "node" : [ "node" ] } },
        { "mail" : {
            "to" : "[node:author]",
            "subject" : "[Manager] El grupo [node:title] ha sido publicado",
            "message" : "El grupo [node:title] ha sido publicado, puedes verlo en [node:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_publicar_contenido'] = entity_import('rules_config', '{ "rules_publicar_contenido" : {
      "LABEL" : "Publicar contenido",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workflow_rules", "rules" ],
      "ON" : { "workflow_state_changed" : [] },
      "IF" : [
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "ANY" : "ANY" } },
            "new_state" : { "value" : { "3" : "3" } }
          }
        }
      ],
      "DO" : [
        { "node_publish" : { "node" : [ "node" ] } },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "9" : "9" } },
            "subject" : "Nuevo contenido de tipo [node:content-type]",
            "message" : "Nuevo contenido de tipo [node:content-type] creado por [node:author]\\r\\n\\r\\n[node:url]"
          }
        }
      ]
    }
  }');
  $items['rules_publicar_contenido_old'] = entity_import('rules_config', '{ "rules_publicar_contenido_old" : {
      "LABEL" : "Publicar contenidoOLD",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "workflow_rules", "rules" ],
      "ON" : { "workflow_state_changed" : [] },
      "IF" : [
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "2" : "2" } },
            "new_state" : { "value" : { "3" : "3" } }
          }
        },
        { "OR" : [] },
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "4" : "4" } },
            "new_state" : { "value" : { "3" : "3" } }
          }
        }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
